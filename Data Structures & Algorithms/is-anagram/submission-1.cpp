class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())return false;
        
        unordered_map<char,int> mpp;

        for(auto it:s) mpp[it]++;
        for(auto it:t) mpp[it]--;

        for(auto it:s){
            if(mpp[it]!=0) return false;
        }

        return true;
    }
};
