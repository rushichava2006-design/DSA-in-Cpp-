class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i = 0, j = 0, k = 0;
          vector<int> c(m + n);
          while(i< m and j < n){
          if(a[i] < b[j]) c[k++] = a[i++];
          else c[k++] = b[j++];
   }
     while(i <m) c[k++] = a[i++];
     while(j < n) c[k++] = b[j++];
     for(int x = 0 ; x<m+n ; x++){
        a[x] = c[x];
     }
    }
};