#include <bits/stdc++.h>
using namespace std;


int main(){
  int t ;
  cin >> t;

  while(t--){
    int dn = 0 , ans = 0 ;
    int n , k ;
    cin >> n >> k;
    vector<int>tmp(n);
    unordered_map<int,int>mp;
    for(int i = 0 ; i<n ; ++i) cin >> tmp[i],mp[tmp[i]]++;

    for(int i = n-1 ; i>=0 ; --i){
        ans += dn;
        if(mp[tmp[i]]==0 || (mp[tmp[i]] && !k)) continue;
        if(mp[tmp[i]]>1 && k) k--;
        mp[tmp[i]]-- ;
        dn++;

        /*
        if(mp[tmp[i]] && k) dn++ , k-- ;
        else if( !mp[tmp[i]] ){
          dn++ ;
          mp[tmp[i]]--;
        }
        */
    }
    cout << ans << "\n";
  }
  return 0;
}
