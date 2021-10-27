class Solution {
public:
    string longestPalindrome(string s) {
        string longest_substr = "";
        for(int i=0; i<s.length(); i++){
            for(int j=i+1; j<s.length(); j++){
                string str = s.substr(i, j);
                if(isPalindrome(str)){
                    if(str.length() > longest_substr.length()){
                        longest_substr = str;
                    }
                }
            }
        }
        return longest_substr;
    }
    
    bool isPalindrome(string s){
        int i = 0, n = s.length();
        while(i < n) {
            if(s[i] != s[n-1]){
                return false;
            }
            i++;
            n--;
        }
        return true;
    }
};
