#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int nc = 0 , s = 0 , ans = 0;
        for(int i = 0 ; i<n ; ++i){
            int tmp;
            cin >> tmp;
            if(tmp<0) nc++;
            s += tmp;
        }

        if(s>=0 && (nc&1)) ans = 1;
        else if(s<0){
            int c = 0 ;
            while(s<0 || (nc&1==1)){
                // cout << s << " " << nc<<"\n";
                s+=2;
                nc--;
                c++;
            }
            ans = c;
        }

        ans = max(0,ans);
        cout << ans << endl;
    }
}