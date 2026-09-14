#include<bits/stdc++.h>

int main(){
    int t ;
    std::cin >> t;
    while(t--){
        int a , b  , c ;
        std::string ans = "First";
        std:: cin >> a >> b >> c;
        bool f = 1;
        if(a<b || (a==b && !(c&1))) f = 0;
        // if(a==b && !(b&1)) f = 0;
        if(!f) ans = "Second";
        std::cout << ans << std::endl;
    }
}