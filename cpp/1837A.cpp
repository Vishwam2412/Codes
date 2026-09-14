#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b ;
        bool f = 0;
        cin >> a >> b;

        if(a%b==0){
            cout <<2 << "\n"<< 1 << " " << a-1;
        }
        else {
            cout << 1 <<"\n" << a;
        }

        // if(a<0) a=-a , f = 1;
        
        // if(b>a || (a%b!=0)  ){
        //     if(f) a = -a;            
        //     cout << 1 <<"\n"<< a  ;
        // } 
        // else {
        //     cout << 2 << "\n";
        //     int fw = (a/b - 1)*b + 1;
        //     int bw = b - 1;
        //     if(f) fw = -fw , bw = -bw;
        //     cout << fw <<" " << bw;
        // }
        cout << endl;
    }
}