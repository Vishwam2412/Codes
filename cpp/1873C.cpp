#include<iostream>
#include<print>
int main(){
    int t;
    std::cin >> t;
    while(t--){
        // const char * strMat[10][10];
        // std::vector<std::string>strMat[10];
        std::string strMat[10];

        for(int i = 0 ; i<10 ; ++i){
            std::cin >> strMat[i] ;
        }

        int ans = 0;

        for(int i = 0 ; i<5 ; ++i){
            
            for(int k = 0 ; k<i ; ++k){
                    if(strMat[i][k]=='X')ans += k+1;
                    if(strMat[i][9-k]=='X') ans+=k+1;
                    if(strMat[9-i][k]=='X')ans += k+1;
                    if(strMat[9-i][9-k]=='X')ans += k+1;
            }

            // std::cout<<"row :: "<<i<<"\n";
            // std::cout<<"sparse :: "<<" :: "<<ans <<"\n";

            // if(i==1 || i==3) continue;
            for(int j = i ; j<10-i ; ++j){
                if(strMat[i][j]=='X') ans+=i+1;
                if(strMat[9-i][j]=='X') ans+=i+1;
            }
            
            // std::cout << "contigous :: "<<ans<<"\n";

        }


        std::println("{}",ans);
    }


}