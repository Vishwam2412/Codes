#include<bits/stdc++.h>
using namespace std;

int main() {
  int n ;
  cin >> n ;

  while (n--) {
    int N , M ;
    cin >> N >> M;
    int cnt = 0;
    unordered_map<int,int> mp;

    while(N--) {
      int px , u ;
      cin >> px >> u ;
      mp[px*u]++;
    }

    while(M--){
      int py , v;
      cin >> py >> v;
      if(mp.find(py*v) != mp.end() ){
        cnt++ , mp[py*v]--;
        if(!mp[py*v]){
          mp.erase(py*v);
        }
      } 
    }

   // for(auto x:mp){
   //   cout << x.first << " " << x.second << "\n";
   // }
    
    cout << "\n";
    cout << cnt << "\n";
  }

  return 0;
}
