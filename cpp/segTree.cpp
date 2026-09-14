#include<bits/stdc++.h>
using namespace std;

int arr[100];

int sum(int index,int i , int j , int l , int u){
    if(i>u || j<l)return 0;
    if(i<=l && u<=j)return arr[index];
    int mid = l+(u-l)/2;
    return sum(i,j,l,mid) + sum(i,j,mid+1,u);
}



void segtree(int index ,int l , int r, vector<int>&v ){
    if(l==r){
        arr[index] = v[l];
        return ;
    }
    int mid = l+(r-l)/2;
    segtree(2*index+1 , l, mid);
    segtree(2*index+2 , mid+1 ,r);
    arr[index] = arr[2*index+1] + arr[2*index+2];
}

int main(){
    vector<int>v = {1,3,3,23,4,32,34,5,1,6};
    int n = v.size();
    memset(arr,0,sizeof(arr));
//     vector<int>prefix(n,0);
//     prefix[0] = 1;
//     for(int i = 1 ; i<n ; ++i)prefix[i] = prefix[i]+prefix[i-1];
    segtree(0,0,n-1,v);

    for(int i = 0 ; i<n; ++i)cout<<arr[i]<<"\n";



    return 0;
}
