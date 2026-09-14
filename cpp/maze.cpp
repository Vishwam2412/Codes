// #include<iostream>
#include<bits/stdc++.h>
using namespace std;


pair<int,int> solve(vector<vector<string>>&path ,vector<vector<bool>>&vis , int i , int j , vector<pair<int,int>>&ans ){
    
    int ps = path.size();
    int psd = path[0].size();
    if(i>=ps|| i<0 || j<0 ||  j>=psd) return {-1,-1};
    if(vis[i][j]==1)return {-1,-1};
    if(i==path.size()-1 && j==path[0].size()-1) return {i,j};

    vis[i][j] = 1;
    
    for(auto &x:path[i][j]){
        if(x=='n') break;
        int co1 = i , co2= j ;
        if(x=='r') co2 = j+1; 
        else if(x=='u') co1 = i-1;
        else if(x=='d') co1 = i+1;
        else if(x=='l') co2 = j-1;   

        pair<int,int>res = solve(path,vis,co1,co2,ans);
        if(res.first!=-1  ){
            ans.push_back({i,j});
            return {i,j};
        }
    }
    return {-1,-1};
}

int main(){

    // vector<vector<string>>arr = {
    //     {"d", "d","n", "n", "n" , "n"},
    //     {"ud", "rud","lr", "n","dr" ,"ld"},
    //     {"ud", "ud","n", "ud","ud" , "ud"},
    //     {"lud", "lur","d", "ud", "lu" , "ud"},
    //     {"ud", "n","ud", "ud", "n" ,"ud"},
    //     {"u","n","ud", "u", "n" , "ur"},
    // };


    vector<vector<string>> arr = {
    {"r", "r", "r", "r", "r", "d"},
    {"n", "n", "n", "n", "n", "d"},
    {"n", "n", "n", "n", "n", "d"},
    {"n", "n", "n", "n", "n", "d"},
    {"n", "n", "n", "n", "n", "d"},
    {"n", "n", "n", "n", "n", "n"}
};

    vector<vector<bool>>vis(6,vector<bool>(6,0));
    vector<pair<int,int>>ans;

    pair<int,int>val = solve(arr,vis,0,0,ans);

    if(val.first == -1 && val.second == -1) cout<<"NO PATH AVAILABLE >>>>>\n";
    else{
        for(auto &x:ans){
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }
    return 0;
}