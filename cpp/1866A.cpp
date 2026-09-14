#include<print>
#include<iostream>

int main(){
    // int t;
    // std::cin >> t;
    // while(t--){
        int n;
        std::cin >> n ;
        int ans = 1e9;

        for(int i = 0 ; i<n ; ++i){
            int tmp ;
            std::cin >> tmp;
            if(tmp<0)tmp = 0-tmp;
            ans = std::min(ans,tmp);
        }
        std::println("{}",ans);
    // }
}