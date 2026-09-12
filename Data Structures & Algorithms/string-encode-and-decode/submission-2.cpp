class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(string str : strs) {
            ans += to_string(str.size()) + "#" + str;
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int i = 0;

        while(i < s.size()) {

            int j = i;

            while(s[j] != '#')
                j++;

            int len = stoi(s.substr(i, j - i));

            j++; 

            string str = s.substr(j, len);
            res.push_back(str);

            i = j + len;
        }

        return res;
    }
};