#include<bits/stdc++.h>


int main(){
    int t ; std::cin >> t ;

    while(t--){
        int n ; std::cin >> n;
        bool ans = n%3;
        std::string val = ans ? "First" : "Second";
        std::cout << val << std::endl;
    }
}