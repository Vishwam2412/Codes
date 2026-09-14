#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>mp;

bool check(int m){
    if(m==0) return true;
    for(auto [x,a]:mp){
        if(a<m)return false;
    }
    return true;
}


int main(){
    int n ;
    cin >> n;

    while(n--){
        int sz , e ;
        cin >> sz >> e;

        int arr[sz];
        for(int i = 0 ; i<sz ; ++i){
            cin >> arr[i];
            //cout << arr[i]<<" ";
            mp[arr[i]]++;
        }

        //cout << "\n" << mp.size() << endl;

        if(mp.size()<e){
            cout << "-_-";
            return 0;
        } 

        int l = 0 , r = sz / e ;
        while(l<r){
            int m = l + (r-l)/2 ;
            if( check(m) ){
                l = m+1;
            }else{
                r = m-1;
            }
        }

        cout << r ; 
    }
    return 0;
}