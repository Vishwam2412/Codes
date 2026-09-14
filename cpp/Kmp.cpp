#include<bits/stdc++.h>
using namespace  std;

vector<int>lps(int n , string v){
  
  int i = 1;
  int length = 0;
  vector<int>l(n,0);

  l[0] = 0;

  while(i<n ){
    if(v[i] == v[length]){

      l[i] = length+1;
      length++;
      ++i;

    }else{

      if(length==0) l[i] = 0 , ++i;
      else length = l[length-1];

    }
  }

  return l;

}


int main(){
  string s;
  s = "aaacaaaa";
  
  vector<int>x = lps(s.size() , s);

  for(auto z:x){
    cout<<z<<" ";
  }

  return 0;
}
