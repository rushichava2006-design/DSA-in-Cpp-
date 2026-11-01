class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int n = s.length() ;
        vector <int> freq(26,0);
        for(char ch : s){
            int idx = ch - 'a' ; 
            freq[idx]++;
        }
        int maxfreq = 0 ;
        for(int i = 0 ; i<26 ; i++){
            maxfreq = max(freq[i],maxfreq); 
        }
        for(int i = 0 ; i<26 ; i++){
            if(freq[i] == maxfreq)
            return (char)( i+97);
        }
        return 0 ;
    }
};