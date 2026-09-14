#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  while (n--) {
    int sz;  cin >> sz;
    //if( sz & 1 ) ans = 1;
    unordered_map<int,int>mp;
    for(int i = 0 ; i < sz ; ++i ){
        int v; cin >> v;
        mp[v]++;
    }
    
    int ans = mp.size() / 2;

    while(mp.size()){
      for(auto it=mp.begin() ; it!=mp.end() ; ++it){
        if (it->second==0){
          it = mp.erase(it);
        } 
        else{
          it->second = it->second - 1;
        }
      }
      if(mp.size()==1)break;
      ans += mp.size()/2;
    }
    
    cout << ans << "\n";

  }

return 0;
}
