#include<bits/stdc++.h>
using namespace std;

int dp[21][21] ;

bool sol(string s , string p , int i , int j){ int sz = s.size();
  int pz = p.size();

  if(i==pz && j==sz) return 1;
  if(j==sz){
      while(i<pz){
        if(p[i+1] != '*') return 0;
        i+=2;
      }
      return 1;
  }
  if(dp[i][j]!=-1) return dp[i][j];
  bool f = 0 ;
  char front  = p[i]:
  char back  = '~';
  if(i+1<pz) back = p[i+1];

  if(back=='*') f = sol(s,p,i+2,j+1) || sol(s,p,i+2 , j) || sol(s,p,i,j+1);
  else{
    if(front!='.' && front!=s[j]) return 0;
    f = sol(s,p,i+1,j+1);
  }

  return dp[i][j]=f;

}


int main(){
  string s , p ;
  cin >> s >> p;
  memset(dp,-1,sizeof(dp));
  bool x = sol(s,p,0,0);
  if(x) cout <<"Match";
  else cout<<"Haha";
  return 0;
}
