#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n ;
        std::cin >> n;
        std::string ans = "YES";
        int s = 0;
        for(int i = 0 ; i<n ; ++i){
            int tmp ;
            std::cin >> tmp;
            s += tmp;
        }
        if(s&1) ans = "NO";
        std::cout << ans << std::endl;
    }
}