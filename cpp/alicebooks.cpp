#include<bits/stdc++.h>
using namespace std;

int main(){

  int n ;
  cin >> n;

  while (n--) {

    int sz ;
    cin >> sz;
    multiset<int>mst;
    int ans = 1;
    while(sz--){
      int ip ;
      cin >> ip;
      mst.insert(ip);
      ans = max(ans,min((int)*mst.begin() , (int)mst.size()));
      while(!mst.empty() && *mst.begin()<=ans) mst.erase( *mst.begin() );
      cout << ans << " ";
    }
    cout<<"\n";
  }

return 0;
}
