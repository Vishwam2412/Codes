#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[22] = "  I am Super  hero   ";
	int b = 0 , s = -1;

	while(b<22){
		if(str[b] == ' '&&s==-1){
			s = b;
		}else if(str[b]!=' ' && s!=-1){
			swap(str[s],str[b]);
			b = s;
			s = -1;
		}
		++b;
	}
	for(auto x:str) cout<<x;
	return 0;
}
