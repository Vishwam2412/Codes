#include<bits/stdc++.h>
using namespace std;

void fact(int i , int res[], int&p){
	int c = 0;
	for(int j = 0 ; j<=p  && j<500; ++j){
		int x = i*res[j] + c;
		res[j] = x%10;
		c = x/10;

	}
	while(c){
		res[++p] = c%10;
		c/=10;
	}
}


int main(){
	int res[500];
	
	int n; cin>>n;
	
	int s = 0;
	res[0] = 1;

	for(int i = 2 ; i<=n ; ++i){
		fact(i,res,s);
	}

	for(int i = s ; i>=0 ; --i) cout << res[i];
	//cout << s;
	cout<<"\n";

	return 0;
}
