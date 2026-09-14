#include<bits/stdc++.h>

int main(){
    int t=0 ;
    std:: cin >> t;
    while(t--){
        int n =0;
        std::cin >> n ;
        long long int a = -1 , b = -1 ;
        long long int dis = LLONG_MAX;
        long long int ans = 0;
        bool f = 1 ;
        int tmp = n;
        while(tmp--){
            std::cin >> b;
            if(a!=-1 && b>=a) dis = std::min(dis,std::abs(b-a));
            else if(a>b){
                f = 0 ;
            }
            a = b;
        }

        if(f && n!=1) ans = (dis/2) + 1;
        std::cout << ans << std::endl;
    }
}