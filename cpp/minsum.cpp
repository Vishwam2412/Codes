#include <bits/stdc++.h>
using namespace std;

long long pow(int a , int b){
    long long res = 1;
    while(b){
        if(b&1) res *= a;
        a *= a;
        b/=2;
    }
    return res;
}

int main(){
    int n ; cin>>n ;

    while(n--){
        int v ; cin >> v;
        int ans = 0;
        vector<int>vec(v,0);
        for(int i = 0 ; i<v ; ++i)cin>>vec[i];
        sort(vec.begin(),vec.end());

        for(int i = 0 ; i<v ; ++i){
            ans += (vec[i]*(v-i));
        }
        cout<<ans<<"\n";
    }
    return 0;
}