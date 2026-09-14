#include<bits/stdc++.h>
using namespace std;

int  main(){
  int n , m ;
  cin >> n >> m;
  int arr[n];
  for (int i = 0 ; i<n ; ++i) cin >> arr[i];
  sort (arr , arr+n);
  for (int i = 1 ; i<n ; ++i) arr[i] += arr[i-1];
  
  while (m--){
    int b ; 
    cin >> b;
    auto it = upper_bound(arr,arr+n,b);
    it--;
    cout << it - arr + 1 << "\n";
  }


  return 0;
}
