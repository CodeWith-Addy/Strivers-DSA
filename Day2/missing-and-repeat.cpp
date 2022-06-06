#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> p;
    unordered_map<int,int> m;
    for(int i=0; i<n;i++){
        m[arr[i]]++;
    }
    for(int i=1; i<=n;i++){
        m[i]--;
    }
    for(auto i:m){
        if(i.second==1){
            p.second=i.first;
        }
        if(i.second==-1){
            p.first=i.first;
        }
    }
	return p;
}
