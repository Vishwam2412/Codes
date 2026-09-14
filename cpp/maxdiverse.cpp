#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

int main(){
    int n ; cin>>n;

    while(n--){
        int l , k; cin>>l>>k;
        unordered_map<ll,int>mp;
        ll ans = 0;
        
        for(int i = 0 ; i<l ; ++i){
            int x ; cin>>x ;
            mp[x]++;
        }

        ans = 1LL*l*(l-1)/2;
        
        priority_queue<int>pq;
        
        for(auto [val , cnt]:mp){
            if(cnt>1) ans -= 1LL * cnt *(cnt-1) /2 , pq.push(cnt);
        }

        for(int i = 0 ; i<k && !pq.empty() ; ++i){
            int z = pq.top();
            ans += (z-1);
            if(z-1>0) pq.push(z-1);
        }
        cout<<ans<<"\n";
    }

    return 0;
}