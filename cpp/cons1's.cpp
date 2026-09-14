#include<bits/stdc++.h>
using namespace std;

bool check(int m , int fl , int *arr, size_t size){
  int zc = 0;
  for(int i = 0 ; i<m ; ++i ){
    if (!arr[i]) zc++;
  }
  if(zc==fl)return true;
  for(int i = m ; i<size ; ++i){
    if(arr[i-m]==0)zc--;
    if(!arr[i]) zc++;
    if(zc==fl)return true;
  }

  return false;

}

int main(){
  int n ;
  cin >> n ;
  while(n--){
  int sz , fl;
  cin >> sz >> fl;
  int arr[sz];

  for (int i = 0 ; i<sz ; ++i) cin>>arr[i];
  int l = 2 , r = sz;
  int len = 1;

  while(l<=r){
    int m = l+(r-l)/2;
    if( check(m,fl,arr,sz) ) len = m  , l = m+1;
    else r = m-1;
  }
  
  cout << len << endl;
  }

}


//int main(){
//    int n ;
//    cin >> n ;
//    // while(n--){
//        int sz , ip ;
//        cin >> sz >> ip ;
//        
//        int arr[sz] ,locc[sz] , rocc[sz] , zcnt[sz];
//        int zc = 0;
//
//
//        for(int i = 0 ; i<sz ; ++i){
//            cin >> arr[i];
//            if(arr[i]==0) zc++;
//            zcnt[i] = zc;
//            locc[0]=-1;
//            if(i>0){
//                locc[i] = locc[i]==0 ? i : locc[i-1];
//            }
//        }
//        rocc[sz-1] = -1;
//        for(int i = sz-2 ; i>=0 ; i--){
//            rocc[i] = rocc[i]==0 ? i : rocc[i+1];
//        }
//
//        int l = 0  , r = sz ;
//        int ans = 0;
//
//        while(l<r){
//            int m = l + (r-l)/2 ;
//
//            int ls = zcnt[m] - zcnt[l] + 1;
//            int rs = zcnt[r] - zcnt[m] + 1;
//
//            if( ls > rs ) ls = rocc[ls]+1;
//            else if(rs > ls) rs = locc[rs]-1;
//            else if( abs(locc[rs]-m) > abs(m - rocc[ls])  ) rs = rocc[rs]-1;
//            else ls = locc[ls]+1;
//
//            int f = zcnt[ls]-zcnt[rs]+1 ;
//            if(f==ip) ans = max(ans , f);
//        }
//
//        cout << ans << endl;
//
//    // }
//    return 0;
//}
