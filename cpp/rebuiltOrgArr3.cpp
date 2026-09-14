#include<bits/stdc++.h>
using namespace std;

int main(){
  int x ;
  cin >> x;
  int  n = 1 << 2 ;

  vector<int>t(n);

  for (int i = 0 ; i<n ; ++i) cin >> t[i];
  
  unordered_map<int,int>mp;
  vector<int>subsetSum,ans;
  mp[0]++;

  for(auto x : t){
    if(mp[x]) mp[x]--;
    else{
      vector<int>tmp;
      ans.pb(x);
      for (auto r : subsetSum ) tmp.pb(r+x) , mp[r+x]++ ;
      subsetSum.insert(subsetSum.end() , tmp.begin() , tmp.end());
      subsetSum.pb(x)
    }
  }

  return 0;
}
