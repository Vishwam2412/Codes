#include<bits/stdc++.h>
using namespace  std;


int main(){
  int n ;
  cin >> n;

  while (n--){
    
    int sz , wsz ;

    cin >> sz >> wsz ;
    int arr[sz] ;          
    multiset<int>mst ;
    
    for( int i = 0 ; i<sz ; ++i ){
        cin >> arr[i] ;
        mst.insert(arr[i]);

        if( i>=wsz-1 ){
            cout << *mst.rbegin() << " " ;
            auto it = mst.find( arr[i-wsz+1] ) ;
            mst.erase(it);
        }

    }

  }
  return 0;
}
