class Solution {
public:
    double myPow(double x, long long int n) {
        if(n<0){
          return 1.0/power(x,-n);  
        }
        return power(x,n);
    }
    
    double power(double x, long long int n){
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
       else if(n%2==0){
            return myPow(x*x,n/2);
        }
        else{
            return x*myPow(x*x,n/2);
        }
    }
};
