class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();

        string s1="";

        for(int i=0;i<n;i++){
            if(isalnum(s[i])) s1 += tolower(s[i]);
        }

        int m=s1.size();
        int l=0;
        int r=m-1;

        while(l<r){
            if(s1[l]!=s1[r]) return false;
            l++;
            r--;
        }

        return true;
    }
};
