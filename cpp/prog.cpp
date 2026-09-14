#include<bits/stdc++.h>
using namespace std;

class RideSharingSystem {
    queue<int>* rider , driver;
    unordered_map<int,bool>mp;


//     bool isEmpty(queue<int>&q){
//         return (int)q.size()==0;
//     }
//



public:
    RideSharingSystem() {
        rider = new queue<int>;
        driver = new driver<int>;
    }
    
    void addRider(int riderId) {
        queue.push(riderId);
    }
    
    void addDriver(int driverId) {
        queue.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        if(rider->empty()==1 || driver->empty()==1) return {-1,-1};
        else{
            int rd = rider.top();
            int dr = driver.top();
            if(mp[rd]){ mp[rd]=0 ; return {-1,-1};}
            rider.pop();
            driver.pop();
            return {rd,dr};
        }
    }
    
    void cancelRider(int riderId) {
        mp[riderId] = 1;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */


int main(){
      RideSharingSystem* obj = new RideSharingSystem();
      obj->addRider(riderId);
      obj->addDriver(driverId);
      vector<int> param_3 = obj->matchDriverWithRider();
      obj->cancelRider(riderId);
 

    return 0;
}
