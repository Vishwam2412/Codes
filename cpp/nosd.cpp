#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll sum(ll x){
  ll cnt = 0;
  while(x){
    cnt += x%10;
    x/=10;
  }
  return cnt;
}

int main(){
  int n ; cin >> n ;
  while(n--){
    ll val , dig ; cin >> val >> dig;
    ll l = 0 , r = val , ans= 0 ;

    while(l<=r){
      ll m = l+(r-l)/2;
      if(m - sum(m) >= dig) ans = val-m+1, r = m-1;
      else l = m+1;
    }

    cout << ans << endl;

  }
  


  return 0;
}
