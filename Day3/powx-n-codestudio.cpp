#include <bits/stdc++.h> 
int modularExponentiation(long long x, int n, int m) {
	if(n==0){
        return 1%m;
    }
    else if(n==1){
        return x%m;
    }
    else if(n%2){
        return ((x%m)*(modularExponentiation(((x%m)*(x%m))%m,n/2,m)%m))%m;
    }
    else{
        return (modularExponentiation(((x%m)*(x%m))%m,n/2,m))%m;
    }
}
