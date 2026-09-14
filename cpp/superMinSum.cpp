#include<bits/stdc++.h>
using namespace std;

int main(){
  int n ; cin >> n ;
  while ( n-- ) {
    int sz ; cin >> sz;
    vector<int>v(sz); 
    multiset<int>mst;
    int ans = 0 ;
    for ( int i = 0 ; i < sz ; ++i ) cin >> v[i] , mst.insert(v[i]);
    for ( int i = 0 ; i < sz ; ++i ){
        int j = i;
        multiset<int>temp;
        while(v[j]!=*mst.begin() && j<sz){
          temp.insert(v[j]);
          ans+= *temp.begin() , j++ ;
        }
        ans += (mst.size()-temp.size())* (*mst.begin());
      auto it = mst.find(v[i]);
      if(it!=mst.end())mst.erase(it);
    }
      cout << ans << endl ;

    }


  }
