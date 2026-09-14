#include<bits/stdc++.h>

int main(){
    int t ; std::cin >> t ;
    while(t--){
        int n ; std::cin >> n;
        std::vector<int>v(n);
        bool f = 0;
        int mn = INT_MIN;
        for(int i = 0 ; i<n ; ++i){
            std::cin >> v[i];
            if( v[i]<mn ) f = 1;
            if(i==0) mn = v[i];
        }
        std::string ans = f ? "NO" : "YES";
        std::cout << ans << std::endl;
    }
}