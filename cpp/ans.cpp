#include<bits/stdc++.h>
using namespace std;


int main(){

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n; cin>>n;
    while(n--){
        int a ; string s;
        cin>>a>>s;
        int arr[2] = {0,0};
        for(auto &c : s){
            arr[c-'0']++;
        }
        vector<int>val;
        int c = 0;
        int ans = 0;
        if(arr[1]==1) ans = -1;
        else if(arr[0]==a) c = 0;
        else{
            if(arr[0]==1){
                c = 1;
                 for(int i = 0 ; i<a ; ++i){
                    if(val.size()==1)break;
                    if(s[i]=='0')val.push_back(i+1);
                }
            }
            else if(arr[1]==2 ){
                c = 2;
                for(int i = 0 ; i<a ; ++i){
                    if(val.size()==2)break;
                    if(s[i]=='1')val.push_back(i+1);
                }
            }
            else if(arr[0]==2 && arr[2]==2){
                c = 3;
                for(int i = 0 ; i<a ; ++i){
                    if(val.size()==2)break;
                    if(s[i]=='0')val.push_back(i+1);
                }
            }
            else{
                ans = -1;
            }
        }
        
        if(ans==-1){
            cout<<-1<<"\n";
        }else{
            cout<<c<<" ";
            for(auto &x: val)cout<<x<<" ";
        }
    }
    return 0;
}

