#include<bits/stdc++.h>
using namespace std;


// long long fact(int n){
//     long long res = 1;
//     for(int i = 2 ; i<=n ; ++i) res *= i;
//     return res;
// }


int main(){
    int n; cin>>n ;
    
    while(n--){
        int l , d ;   cin>>l>>d;
        // unordered_map<int,int>mp;
        // int z = 0;
        int ans = 0;
        multiset<int>mst;

        for(int i = 0 ; i<l ; ++i){
            int z ;
            cin>>z ; 
            mst.insert(z);
            // mp[z]++;
            cin.ignore();
        }

        int z = -1;
        int tmp = l--;
        int s = 0;

        for(auto it = mst.rbegin() ; it!=mst.rend() ; ++it,--l){
            if(*it != z){
                ans += l;
            }
            else if(*it == z && d ){
                ans += l;
                --d; 
            }else if(*it == z && !d){
                ans--;
            }
            z = *it;
        }




        // long long x = fact(l);
        // long long y = fact(l-2);
        // int rep = mp.size()+d;
        // long long x = fact(l);
        // long long y = fact(l-2);
        // int rep = mp.size()+d;
        
        // long long ans = x/y; ;
        // ans /=2;

        // if( rep < l){
        //     long long z = fact(l-rep);
        //     ans /= z;
        // }
        // long long ans = x/y; ;
        // ans /=2;
 
        // if( rep < l){
        //     long long z = fact(l-rep);
        //     ans /= z;
        // }

        cout<<ans<<"\n";
    }


    return 0;
}