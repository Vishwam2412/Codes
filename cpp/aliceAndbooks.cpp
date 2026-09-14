#include<bits/stdc++.h>
using namespace  std ;

int main(){
  int T;
  cin >> T;
  while(T--){
    int N ;
    cin >> N;
    int ans = 1;
    multiset<int>mst;
    while(N--){
      
      int ip ; 
      cin >> ip;
      mst.insert(ip);
      auto it = mst.begin();
      while(!mst.empty() && *it <= ans) it = mst.erase(it);
      ans = max(ans,min((int)*mst.begin(),(int)mst.size()));
      cout << ans << " ";
    }

  }
}

