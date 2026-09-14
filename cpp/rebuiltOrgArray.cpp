#include<bits/stdc++.h>
using namespace std;


//  TOO lengthy can be improved using memo+dp

// vector<int> sol(vector<int>&sm , int i , int val , int sv){
//     if(i>=sm.size() || val<=0 || sv<0) return {};
//     if(val==1 && sv-sm[i]==0) return {sm[i]};

//     vector<int> skip = sol(sm , i+1 , val , sv);
//     vector<int> add = sol(sm , i+1 , val-1 , sv-sm[i]);
    
//     if(add.empty()) return skip;
//     add.push_back(sm[i]);

//     return add;
// }



//  Famous Approach


vector<int> sol(vector<int>&sm , int i , int val , int sv){
    vector<int>ans;
    int n = sm.size();

    unordered_map<int,int>mp;

    vector<int>subsetSum;
    // subsetSum.push_back(0);
    mp[0] = 1;

    for(int i = 0 ; i<n ; ++i){
        if(mp[sm[i]]) mp[sm[i]]--;
        else{
            ans.push_back(sm[i]);
            subsetSum.push_back(sm[i]);
            vector<int>temp;
            for(auto &x:subsetSum)  temp.push_back(sm[i]+x) , mp[sm[i]+x]++;
            for(auto &x :temp) subsetSum.push_back(x);
        }
    }

    return ans;
    
}



int main(){
    int n  ; cin>>n;
    
    while(n--){
        int val ; cin>>val;
        int sz = pow(2,val);
        vector<int>vex(sz,1);

        for(int i = 0 ; i<sz ; ++i) cin>>vex[i];
        
        sort(vex.begin(),vex.end());    

        int sv = vex[sz-1];

        vector<int> no = sol( vex , 1 , val , sv);

        for(auto &x:no ) cout << x << " ";
        cout<<"\n";
    }
}