#include<bits/stdc++.h>
using namespace std;

#define PRIME  5


int64_t calculate_hash(string s , int sz){
    int64_t hash = 0;
    for(int i = 0 ; i<sz ; ++i){
      hash += (int64_t)(s[i] * (int64_t)pow(PRIME,i));
    }
    return hash;
}


int64_t recalculate_hash(string str , int old_hash , int old_ind , int newInd , int pattern_size){
    int64_t new_hash = old_hash - str[old_ind];
    new_hash /= PRIME;
    new_hash += (int64_t)(str[newInd] * (int64_t)pow(PRIME,pattern_size-1));
    return new_hash;
}



bool same(string str , string pattern , int sb , int se , int pb , int pe){
  if(se-sb != pe-pb) return 0;
  
  while(sb!=se){
    if(str[sb]!=pattern[pb]){
      return 0;
    }
    sb++ , pb++;
  }
  return 1;
}



int rabin_karp(string str , string pat ){
  
  int n = str.size();
  int m = pat.size();


  int string_hash = calculate_hash(str,m);
  int pattern_hash = calculate_hash(pat,m);



  for(int i = 0 ; i<n-m+1 ; ++i){
      if(string_hash==pattern_hash){
          if(same(str,pat,i,i+m, 0 , m)) return i;
      }
      string_hash = recalculate_hash(str,string_hash,i,i+m, m);
  }

  return -1;

}

int main(){

  cout<<rabin_karp("hello_world","world")<<"\n";

  return 0;
}
