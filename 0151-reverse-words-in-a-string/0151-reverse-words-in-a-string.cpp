class Solution {
public:
    string reverseWords(string s) {
        //homework
      string ans = "";
      int n = s.length();
      int i = n-1 ;
      while (i>=0){
        if(s[i] == ' '){
            i--;
        }
       
     else {
        int j = i ;
        while(i>=0 and s[i] != ' '){
            i--;
        }
        if(ans.length()> 0){
            ans += ' ';
        }
        ans += s.substr(i+1,j-i);
     }
     }
      return ans ;
    }
};