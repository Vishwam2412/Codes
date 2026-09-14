#include <bits/stdc++.h>
using namespace std;


int main(){
  int n ;
  cin>>n;
  while(n--){
    int a , b , c;
    cin >> a >> b >> c;
    int m[a] , p[b];
    for(int i = 0 ; i<a+b ; ++i){
      if(i<b) cin >> m[i];
      else cin>>p[i-a];
    }
    sort(m,m+a);
    sort(p,p+b);
    
    int l = m[0]+p[0] , r = m[a-1]+p[b-1] , ans = -1;

    while(l<=r){
      int md = l+(r-l)/2;
      int cnt = 0 ;
      for(int i = 0 ; i<a ; ++i){
        int ps = upper_bound(p,p+b,md-m[i])-p;
        cnt+=ps;
      }

      if(cnt>=c)ans=md , r = md-1;
      else l = md+1;

    }
    cout << ans << endl;
  }
}



/*
int main(){
  int n ; 
  cin >> n ;
  while(n--){
    int m , p , k;
    cin >> m >> p >> k;
    int arr1[m] ,arr2[p];
    for (int i = 0 ; i<m+p ; ++i){
      if(i<m)cin >> arr1[i];
      else cin >> arr2[i-m];
    }
    int idx1=0 , idx2  = 0;
    if(k%p==0) idx1 = k/p - 1 ,idx2 = p-1;
    else idx1 = (k+p+k%p)/p - 1 , idx2 = k%p-1;
    cout << idx1 << " " << idx2 << " : ";
    cout << arr1[idx1] *arr2[idx2] << endl;
  }

  return 0;
}
*/

