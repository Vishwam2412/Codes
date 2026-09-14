#include<bits/stdc++.h>
int main(){
    int t;
    std::cin >> t ;

    while(t--){
        int n ;
        std::cin >> n ;
        std::unordered_map<int,int>mp;
        for(int i = 0 ; i<n ; ++i){
            int rnd ; 
            std :: cin >> rnd ;
            mp[rnd]++;
        }
        bool fg = 0;
        int f = -1 , s = -1;
        for(auto &[k,v]:mp){
            if(f==-1) f = v;
            else s = v;
        }

        if(mp.size()==1) fg = 1;
        else if(mp.size()==2 && ((abs(f-s)==1 || abs(f-s)==0) || f==0 || s==0 ))  fg = 1;

        if(fg) std::cout<<"YES";
        else std::cout<<"NO";
        std::cout << std::endl;
        
        

        // int i1 = -1 , i2 = -1 , i3 = -1;
        // int ci1 = 0 , ci2 = 0;

        // for(int i = 0 ; i<n ; ++i){
        //     int rn ; 
        //     std :: cin >> rn;

        //     if(i==0)i1 = rn , ci1++ ;
        //     else if(rn==i1) ci1++;
        //     else if(rn != i1 && i2 == -1)  i2 = rn , ci2++ ;
        //     else if(rn == i2) ci2++;
        //     else i3 = 0;
        // }

        // std::cout << ci1 <<" " << ci2 << " "<<i3 << std::endl;
        // if((i3==-1) && (ci1==2*ci2 || ci2==2*ci1) )std :: cout << "YES";
        // else std:: cout << "NO";
        // std::cout << std::endl;
    }

    return 0;
}