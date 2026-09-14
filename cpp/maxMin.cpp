#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , v ;
    cin >> n >> v;
    int arr[n];
    priority_queue<int>mst;

    for(int i = 0 ; i<n ; ++i){ 
        cin >> arr[i];
        if(i>0) mst.push(arr[i]-arr[i-1]);
    }

    if(mst.top()==1 || v==0){
        cout << mst.top() << endl;
        return 0;
    }

    int tv = v;

    while(v--){
        int f = mst.top();
        mst.pop();
        // auto it = mst.erase(mst.begin());
        // cout << mst.top() << "\n";
        int l = 2 , r = tv+1;

        while(l<r){
            int top = mst.top();
            if(l+1==r){
                l = f/r > top ? r : l;
                break;
            }
            int m = l+(r-l)/2 ;
            int fv =  f/m;
            if(top < fv) l = m;
            else r = m;
            //cout << l << " " << r << "\n";
        }

        int sp_int = f/l;
       for(int i = 1 ; i<sp_int ; ++i) mst.push(sp_int);
        mst.push((sp_int + f%l));

    }

    cout << mst.top() << "\n";

    return 0;

}