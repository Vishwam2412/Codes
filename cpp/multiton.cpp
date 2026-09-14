#include<bits/stdc++.h>
using namespace std;

class multiton{

    static unordered_map<int,multiton*>mp;

    public:
    
    multiton(const multiton&) = delete;
    multiton operator=(const multiton&) = delete;

    multiton(){}

    static multiton& getInstance(int key){
        if(mp[key]==0){
             mp[key] = new multiton();
        }
        return *mp[key];
    }

    static void destroyAll(){
        for(auto &it:mp){
            delete it.second;
        }
        mp.clear();

    }

    ~multiton(){}
};


int main(){

    return 0;
}
