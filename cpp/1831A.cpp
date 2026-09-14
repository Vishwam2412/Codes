#include<bits/stdc++.h>
using namespace std;

bool isSorted(std::vector<int>&x){
    for(int i = 1 ; i<x.size() ; ++i){
        if(x[i]<x[i-1]) return false;
    }
    return true;
}

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        bool f = 0;
        vector<int>v(n);
        for(int i = 0 ; i<n ; ++i){
            cin >> v[i];
            v[i] = n+1-v[i];
        }
        for(auto x:v){
            cout << x << " ";
        }
      
        cout << std::endl;
    }   
}