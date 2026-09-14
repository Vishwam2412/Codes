#include<bits/stdc++.h>
int main(){
    int t; std::cin >> t;
    while(t--){
        int n , x ; std::cin>>n>>x;
        int lst_int = 0;
        int ans = 0;
        for(int i = 0 ; i<n ; ++i){
            int tmp ; std::cin >> tmp;
            ans = std::max(ans,tmp-lst_int);
            lst_int = tmp;
        }
        ans = std::max(ans,2*(x-lst_int));

        std::cout << ans << std::endl;

    }
}