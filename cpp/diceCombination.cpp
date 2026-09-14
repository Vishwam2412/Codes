#include<bits/stdc++.h>
using namespace std;
int ans = 0;
int N = 1000000007;
// long long dp[1000001][];
int nums[6];
long long solve( int val){
    if(val==0)return 1;
    if(val < 0)return 0;
    // if(dp[i][val]!=-1) return dp[i][val];
    long long ans = 0;
    for(int i = 0 ; i<6 ; ++i){
        ans = (ans+solve(val-nums[i]))%N;
    }
    return  ans;
}

int main(){
    int n ; cin>>n;
    for(int i = 1 ; i<=6 ; ++i) nums[i-1] = i;
    cout<< solve(n)<<"\n";
    // for(int i = 0 ; i<n+1 ; ++i) dp[i][0] = 0;
    // for(int j = 0 ; )

    return 0;
}