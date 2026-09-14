#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;

    cin>>t;
    while(t--){
        int n ,k ,x;
        cin >> n >> k >> x;
        bool f = 0;
        bool one = 0;

        if(n==k && x!=k){
            cout <<"YES\n"<< 1 <<"\n" << k;
        }
        else
        {
            if(x!=1){
            f = 1;
            one  = 1;
            }
            else{
                if((n&1) && k<=2) f = 0;
                else if((n&1) && n-5<0) f = 0;
                else if(n&1) f = 1;
                else if(!(n&1) && k!=1) f = 1;
            }

            if(one && f){
                cout << "YES\n" << n <<"\n";
                for(int i = 0 ; i<n ; ++i){
                    cout << 1 << " ";
                }
            }else if(f){
                int sz ,c2,co=-1;
                cout << "YES\n" ;
                if(n&1){
                    c2 = (n/2) - 1;
                    co =  3;
                    sz = c2 + 1;
                }
                else{
                    c2 = n/2;
                    sz = c2;
                }
                cout << sz <<"\n";
                for(int i = 0 ; i<c2 ; ++i) cout << 2 << " ";
                if(co!=-1) cout << co ;
            }else{
                cout << "NO";
            }
        }
        cout << endl;
    }
}