#include<bits/stdc++.h>

bool isSorted(std::vector<int>&v){
    for(int i = 1 ; i<v.size() ; i++) if(v[i]<v[i-1]) return 0;
    return 1;
}

int main(){
    int n;
    std::cin >> n;

    while(n--){
        int k , t;
        std::cin>>t>>k;
        std::vector<int>v(t);
        for(int i = 0 ;i<t ; ++i)std::cin >> v[i];
        if(k==1 && !isSorted(v)) std::cout << "NO";
        else std::cout<<"YES";
        std::cout<<std::endl;
    }
    return 0;
}