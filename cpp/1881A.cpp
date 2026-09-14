#include<bits/stdc++.h>
// #include<print>

int main(){
    int  t ;
    std::cin >> t ;
    while(t--){
        int n , m ;
        std::string a , b;
        std::cin >> n >> m ;
        std::cin >> a >> b ;

        int ans = -1;
        if(a==b) ans = 0 ;
        else {
            int f = 0 ;
            int lst = 0;

            while(f<=5){
                    if(a.size()>=b.size()){
                        for(int i = lst ; i<=a.size()-b.size() ; ++i){
                            if(a.substr(i,b.size())==b){
                                ans = f;
                                break;
                            }
                        }
                    }
                    if(ans!=-1) break;
                    int l = a.size()-b.size()+1;
                    lst = std::max(l,0);
                    a+=a;
                    f++;
            }

        }

        // std::cout << ans << std::endl;
        std::println("{}",ans);
        
    }

}