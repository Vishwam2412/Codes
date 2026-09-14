#include<bits/stdc++.h>
using namespace std ;

char _or(char a , char b){
  //cout << "OR\n";
  if(a=='1' || b=='1') return '1';
  if((a=='X' && b=='x') || (a=='x' && b=='X')) return 'x';
  else if(a=='X' || b=='X') return 'X';
  else if(a=='x' || b=='x' ) return 'x';
  return '0';
}

char _and(char a , char b){
  //cout << "AND\n";
  if(a=='0' || b=='0') return '0';
  if((a=='X' && b=='x') || (a=='x' && b=='X')) return '0';
  else if(a=='X' && b=='X') return 'X';
  else if(a=='x' && b=='x' ) return 'x';
  else if(b=='1')return a;
  else if(a=='1')return b;
  return 1;
}

char _xor(char a , char b){
  
  //cout << "XOR\n";
  if((a=='1' && b=='0') || (a=='0' && b=='1')) return '1';
  if((a=='X' && b=='X') || (a=='x' && b=='x')) return '0';
  if((a=='X' && b=='x') || (a=='x' && b=='X')) return '1';
  else if(a=='X' || b=='X') return 'X';
  else if(a=='x' || b=='x' ) return 'x';
  return '0';
}

char compute(char f , char s , char t){
  char a ;
  switch(s){
    case '|':
       a = _or(f,t);
       break;
    case '&':
       a = _and(f,t);
       break;
    case '^':
       a = _xor(f,t);
       break;
  }
  return a;
}

int main() {
  int n ; cin >> n;
  
  while(n--){
    string input;
    cin >> input;
    int sz = input.size();
    
    stack<char>st;
    for ( int i = 0 ; i<sz ; ++i ){
      if(input[i] == ')'){
          char f = st.top();
          st.pop();
          char s = st.top();
          st.pop();
          char t = st.top();
          st.pop();
          st.pop();
          char val = compute(f,s,t);
          st.push(val);
        }
      else st.push(input[i]);
    }
    //cout << st.top() << endl;
    if(st.top()=='0' || st.top()=='1')cout << 0 << endl;
    else cout << 1 << endl;

  }

  return 0;
}
