#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	
    unordered_map<int,int> m;
    for(int i=0; i<n;i++){
        m[arr[i]]++;
    }
    for(auto i:m){
        if(i.second>1){
            return i.first;
        }
    }
}
