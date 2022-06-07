#include <bits/stdc++.h> 

long long int merge(long long *arr, int low, int mid, int high){
    int i=low,j=mid,k=0;
    long long temp[(high-low+1)];
    long long int inv=0;
    while((i<mid) && (j<=high)){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            ++i;
            ++k;
        }
        else{
            temp[k]=arr[j];
            inv+=(mid-i);
            ++j;
            ++k;
        }
    }
    while(i<mid){
        temp[k]=arr[i];
        ++i;
        ++k;
    }
    while(j<=high){
        temp[k]=arr[j];
        ++j;
        ++k;
    }
    
    for(int i=low,k=0; i<=high; i++,k++){
        arr[i]=temp[k];
    }
    return inv;
}

long long int mergesort(long long *arr,int low, int high){
    long long int inv=0;
    int mid;
    if(low<high){
     mid=(low+high)/2;
    inv+=mergesort(arr,low,mid);
    inv+=mergesort(arr,mid+1,high);
    inv+= merge(arr,low,mid+1,high);
    }
    return inv;
}

long long int  getInversions(long long *arr, int n){
    return mergesort(arr,0,n-1);
}
