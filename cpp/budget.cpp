#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin >> n;

  while (n--) {
    int n_price ; cin >> n_price ;
    int arr[n_price];
    for( int i = 0 ; i < n_price ; ++i ) cin >> arr[i] ;
    
    int n_budget; cin >> n_budget ;
    int arr_b[n_budget];
    for( int i = 0 ; i < n_budget ; ++i ) cin >> arr_b[i] ;
    
    sort( arr, arr+n_price );

    for(int i = 1 ; i<n_price ; ++i ) arr[i] += arr[i-1];

    for( int i = 0 ; i< n_budget ; ++i ){
      auto it = upper_bound( arr , arr+n_price , arr_b[i] );
      --it;
      cout << it - &arr[0] + 1 << "\n";
    }


  }
  

  return 0;
}
