#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<bool>>&grid , int p1 , int p2){
    for(int i = 0 ; i<grid[0].size() ; ++i) if(i!=p2 && grid[p1][i]==1) return 0;
    for(int i = 0 ; i<grid.size() ; ++i) if(i!=p1 && grid[i][p2]==1) return 0;
    int i = p1,j = p2;
    while(i>=0 && j>=0 ){
        if( i!=p1 && j!=p2 && grid[i][j]==1) return 0;
        i--;
        j--;
    }
     i = p1,j = p2;
    while(i<grid.size() && j>=0 ){
        if( i!=p1 && j!=p2 && grid[i][j]==1) return 0;
        i++;
        j--;
    }
     i = p1,j = p2;
    while(i>=0 && j<grid[0].size() ){
        if( i!=p1 && j!=p2 && grid[i][j]==1) return 0;
        i--;
        j++;
    }
     i = p1,j = p2;
    while(i<grid.size() && j<grid[0].size()){
        if( i!=p1 && j!=p2 && grid[i][j]==1) return 0;
        i++;
        j++;
    }

    return 1;
}   

bool putQueen(int l , vector<vector<bool>>&map){
    if(l>=map.size()) return 1;
    for(int i = 0 ; i<map.size() ; ++i){
        map[l][i] = 1;
        if(isSafe(map,l,i)){
            bool x = putQueen(l+1,map);
            if(x)return x;
        }
        map[l][i] = 0;
    }
    return 0;
}

int main(){
    vector<vector<bool>>map(8,vector<bool>(8,0));
    bool x = putQueen(0,map);
    if(x==0) cout<<"NO ARRANGEMENT POSSIBLE\n";
    else{
        for(int i = 0 ; i<map.size() ; ++i){
            for(int j = 0 ; j<map[0].size() ; ++j){
                
                cout<<map[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}