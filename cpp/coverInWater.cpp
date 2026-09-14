#include<bits/stdc++.h>


int main(){
    int t ; std::cin >> t;
    while(t--){
        int n ; std::cin >> n;
        int cnt = 0 ;
        int ans = 0 , tmp = 0 ;
        while(n--){
            char entry ;
            std::cin >> entry ;
            if(entry == '.') cnt++;
            else tmp+= cnt , cnt = 0;
            if(cnt==3) ans = 2;
        }
        tmp += cnt;
        if(ans!=2) ans = tmp;

        std::cout << ans << std::endl;
    }
    return 0;
}