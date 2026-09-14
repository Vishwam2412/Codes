#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n;
    while(n--){
        int sz ; cin >> sz ;
        int arr[sz];
        for(int i = 0 ; i<sz ; ++i) cin >> arr[i];
        
        int l = 0 , r = sz-1 ;
        //int ans = arr[l]<arr[r] ? l : r ;
        // cout << l << " " << r;
        while( l<r ){
            int m = l+(r-l)/2 ;
            if( arr[m]<arr[r]) r = m;
            else if (arr[m]<arr[l]) l = m;
            else l++ ; 
            // cout << l << " " << r << "\n";
        }
        cout << l << endl;
    }
    return 0;
}