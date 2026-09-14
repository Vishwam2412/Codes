#include<bits/stdc++.h>
using namespace std;

void insertSortRev(int *arr , int s){
    for(int i = 1 ; i<s ; ++i){

        int key = arr[i];
        int j = i-1;
        while(arr[j]<key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}



int main(){
    int sz ;
    cin >> sz;
    int arr[sz];
    for(int i = 0 ; i<sz ; ++i) cin >> arr[i];
    insertSortRev(arr,sz);
    for(int i = 0 ; i<sz ; ++i) cout << arr[i] << " ";
}