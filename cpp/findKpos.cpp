#include<bits/stdc++.h>
using namespace std;

int bsL(int* arr , int l , int r , int q){
    while(l<=r){
        int m = l+(r-l)/2 ;
        if(arr[m]==q) return m+1;
        else if(arr[m]<q) l = m+1;
        else r = m-1;
    }
    return -1;
}

int bsr(int* arr , int l , int r , int q){
    while(l<=r){
        int m = l+(r-l)/2 ;
        if(arr[m]==q) return m+1;
        else if(arr[m]<q) r = m-1;
        else l = m+1;
    }
    return -1;
}

// int ans(int& arr , int sz, int q){
    
// }


int main(){
    int n , q ;
    cin >> n >> q;
    int arr[n];
    for (int i = 0 ; i<n ; ++i) cin >> arr[i];
    
    int peak = 0;
    int l = 0 , r = n-1;
    while(l<r){
        // cout << l << " " << r << "\n";
        int m = l+(r-l)/2;
        if( m+1<n && arr[m]>arr[m+1]) { l = m ;break;}
        else if(m-1>=0 && arr[m]>arr[m-1] ) l = m+1 ;
        else if(m+1 <n &&arr[m]>arr[m+1])r = m-1;
        else l++;
    }

    cout << "peak : "<< l <<"\n";
    
    while(q--){
    int sv ; 
    cin >> sv;
    int v1 = bsL(arr,0,l,sv);
    int v2 = bsr(arr,l,n-1,sv);

        if(v1!=-1) cout << v1<<" ";
        if(v2!=-1 && v2 != v1) cout << v2<<" ";
        cout << "\n";
    }
    return 0;
}