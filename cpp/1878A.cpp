#include <print>
#include <iostream>

int main(){
    int t; 
    std::cin >> t;
    while(t--){
        int sz , k ;
        std::cin >> sz >> k ;
        bool ans = 0 ;
        for(int i = 0 ; i<sz ; ++i) {
            int tmp;
            std::cin >> tmp ;
            if(tmp==k) ans = 1;
        }
        const char* val = ans ? "YES" : "NO" ;
        std::println("{}",val);
    }
}