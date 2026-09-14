#include<bits/stdc++.h>
using namespace std;


void dfs(vector<vector<int>>&adj , int node , vector<bool>&flag){
	if(flag[node])return;
	flag[node] = 1;
	for(int i = 0; i<adj[node].size();++i){
		dfs(adj , adj[node][i] , flag);
	}
}


bool single_connect(vector<vector<int>>&adj , vector<bool>&flag){
	int cnt = 0;
	for(int i = 1 ; i<flag.size() ; ++i){
		if(flag[i])continue;
		dfs(adj , i , flag );
		cnt++;
	}
	return cnt==1;
}


int main(){
	int a , b;
	cin>>a>>b;
	
	vector<vector<int>>adj(a+1);
	vector<bool>flag(a+1,0);

	for(int i = 0 ; i<b ; ++i){
		int c,d;
		cin>>c>>d;
		adj[c].emplace_back(d);
	}
	
	bool single = single_connect(adj , flag);
    // cout<<single;
	string s = (single && a-1 == b)  ? "YES":"NO";
	cout << s;
	return 0;
	
}

