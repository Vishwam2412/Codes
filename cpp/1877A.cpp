#include<iostream>
#include<print>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n ;
        std::cin >> n;
        int ans = 0;
        for(int i = 0 ; i<n-1 ; ++i){
            int tmp;
            std::cin >> tmp;
            ans+=tmp;
        }
        ans = 0-ans;
        std::println("{}",ans);
    }
}
