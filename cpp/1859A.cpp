#include <iostream>
#include <print>
#include<vector>

#define pb push_back

int main(){
    int t ;
    std::cin >> t ;

    while(t--){
        int n ;
        std::cin >> n ;
        std::vector<int>v(n,0);// , v2;


        for(int i = 0 ; i<n ; ++i){
            std::cin >> v[i];
        }

        std::vector<int>a, b;
        int mele = *std::max_element(v.begin(),v.end());
        for(int i =0  ; i<n ; ++i){
            if(v[i]!=mele) a.pb(v[i]);
            else b.pb(v[i]);
        }
        if(b.empty()) std::cout << -1 ;
        else{
            // std::cout << a.size() << " " << b.size() ;
            s

        }
        // std::sort(v.begin(),v.end());

        // int f = -1 ;
        // std::vector<int>tmp;
        // tmp.pb(v[0]);

        // for(int i = 1 ; i<n ; ++i){
        //     if(v[i]==v[i-1]){
        //         tmp.pb(v[i]);
        //         continue;
        //     }
        //     else{
        //         f = i;
        //         break;
        //     }  
        // }

        // if(f==-1) std::cout << -1 ;
        // else{
        //     int sz = tmp.size();
        //     std::println("{} {}",sz , n-f);
        //     for(auto x:tmp) std:: cout << x << " ";
        //     std::cout << "\n";
        //     for(int j = f ; j<n ; ++j)
        //         std::cout << v[j] << " ";
        // }
        // std::cout << "\n";
    }
}