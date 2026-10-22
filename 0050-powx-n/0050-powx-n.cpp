class Solution {
public:
    double power(double x , long long n){
         if(n==0) return 1.0;
       double half = power(x,n/2);
       if(n%2 == 0){
        return half * half ;
       }
       else{
        return x * half * half ;
       }
    }
    double myPow(double x, int n) {
      bool flag = (n >= 0); // flag is true if b is positive
      long long n2  = n;
      double ans = power (x , abs(n2));
      if (flag == false ) ans = 1 / ans ;
      return ans ;
    }
    
};