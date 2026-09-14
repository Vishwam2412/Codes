#include<iostream>
#include<print>
#include<vector>
#define pb push_back

int main(){
    int t;
    std::cin>>t;

    while(t--){
        int n ;
        std::cin >> n;
        int tmp=-1 ;
        std::vector<int>ans;
        std::cin >> tmp;
        // ans.pb(tmp);
        std::cout << tmp <<" ";
        bool f = 0;
        for(int i = 0 ; i<n-1 ; ++i){

            int tmp2=-1;
            std::cin>>tmp2;

            if(tmp==1){
                ans.pb(tmp2);
                // std::cout << tmp2 << " ";
            }
            else if(tmp2==1){
                ans.pb(1),ans.pb(1);
                // std::cout << 1 <<" "<< 1 << " ";
            }
            else{
                int z = std::min(tmp,tmp2)-1;
                if(z){
                    ans.pb(z);
                    // std::cout << z << " ";
                }
                ans.pb(tmp2);
                // std::cout << tmp2 << " ";
            }

            tmp = tmp2;
           
        }
       
        std::println("{}",ans.size());
        for(auto x:ans) {
            if(x==-1) continue;
            std::cout << x << " ";
        }
        std::cout << "\n";
    }
}