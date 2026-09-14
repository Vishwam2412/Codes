#include<bits/stdc++.h>
using namespace std;
#define ld long double

int main(){
  int t ;
  cin >> t;
  while (t--) {
    int n , k ;
    cin >> n >> k;
    int a[n] , b[n];


    for(int i = 0 ; i<(n+n) ; ++i){
      if(i<n){
          cin >> a[i];
          //if(i>0) a[i]+=a[i-1];
      }
      else{
        cin >> b[i-n];
        //if(i>n )b[i-n]+=b[i-n-1];
      } 
    }


    ld l = 0.0 , r = 1e8 ;
    ld ans = 0.0 ;
    while(abs(l-r)>1e-9){
        ld mid = (l + r)/2.0;
      priority_queue<ld,vector<ld>,greater<ld>>pq;
      for(int i = 0 ; i<n ; ++i){
          pq.push(a[i]-mid*b[i]);
         if(pq.size()>k)pq.pop();
      }
      ld f= 0.0;
      while(!pq.empty()){
        f+=pq.top();
        pq.pop();
      }
      
      if(f>=0.0) ans = mid , l = mid;
      else r = mid;

    }

    cout << fixed << setprecision(6) << ans << endl;

  }
return 0;
}
