class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> hash(256, 0);

        // Store frequency of characters in t
        for(char c : t) {
            hash[c]++;
        }

        int l = 0, r = 0;
        int count = 0;
        int minlen = INT_MAX;
        int startIndex = -1;

        while(r < s.size()) {
            // If character is needed
            if(hash[s[r]] > 0) {
                count++;
            }
            hash[s[r]]--;

            // When all characters matched
            while(count == t.size()) {
                if(r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    startIndex = l;
                }

                hash[s[l]]++;
                if(hash[s[l]] > 0) {
                    count--;
                }
                l++;
            }

            r++;
        }

        return startIndex == -1 ? "" : s.substr(startIndex, minlen);
    }
};