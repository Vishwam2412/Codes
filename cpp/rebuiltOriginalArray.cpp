#include <bits/stdc++.h>
using namespace std;

int main(){
  int sz ; 
  cin >> sz;
  //int ipsz = pow(2,sz);
  int ipsz = 1<<sz;
  unordered_map<int,int>mp;
  int arr[ipsz];
  //multiset<int>mst;
  vector<int>subsums,ans;

  for(int i = 0 ; i<ipsz ; ++i) cin >> arr[i] ;
  sort(arr,arr+ipsz);
  mp[0] = 1;


  for(int i = 0 ; i<ipsz ; ++i){
    if(mp[arr[i]]) mp[arr[i]]--;
    else {
      ans.pb(arr[i]);
      for(auto x:subsums) subsums.pb(x+arr[i]) , mp[x+subsums]++;
      subsums.pb(arr[i]);
    }
  }

  for(auto x:ans){
    cout << x << " ";
  }


return 0;
}
