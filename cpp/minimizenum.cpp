#include<bits/stdc++.h>
using namespace std;

int val(string s , int k){
  int ans = 0;
  for(int i = 0 ; i < s.size() ; ++i){
    if(i==k) continue;
    ans = ans*10 + (s[i]-'0');
  }
  return ans;
}


int main(){
  string s , ans ;
  int l;
  cin >> s >> l ;

  for(auto c:s){
    while(l && ans.size() && c<ans.back()){
      ans.pop_back();
      l--;
    }
    ans+=c;
  }
  
  while(l--){
    ans.pop_back();
  }
  int i = 0;
  for( ; i<ans.size() && ans[i]=='0' ; ++i ){}

  ans = ans.substr(i);

   ans = ans==""?"0" : ans;

  cout<<ans<<"\n";

  return 0;
}



//int main(){
//    string n ; cin>>n;
//    int rd ; cin>>rd;
//
//    for(int i = 0 ; i<rd ; ++i){
//      string tmp = n;
//      int v = 1000000000;
//      for(int j = 0 ; j<n.size() ; ++j){
//          v = min(val(n,j),v);
//      }
//      n = to_string(v);
//    }
//    
//    cout<<n<<"\n";
//    return 0;
//}
