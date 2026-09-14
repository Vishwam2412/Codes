#include<bits/stdc++.h>
using namespace std;

class bag{

int sm;
multiset<int>mst;

  public :
    
    bag(){
      sm = 0;
    }

    void addElement(int x){ mst.insert(x) , sm += x;}

    void removeElement( int x ){
        auto it = mst.find(x);
        if(it==mst.end()) return ;
        it = mst.erase(it);
        cout << x << " has been deleted.\n";
        sm -= x;
    }

    void maxElement(){
      if( mst.empty() ) cout << "Ds is Empty.\n";
      else cout << "Max Element in Ds is "<< *mst.rbegin() <<"\n";
    }
    void minElement(){
      if( mst.empty() ) cout << "Ds is Empty.\n";
      else cout << "Min Element in Ds is "<< *mst.begin() <<"\n";
    }

    void sumElement(){
      if(mst.empty()) cout << 0 << "\n";
      else cout << sm << "\n";
    }


};


int main(){
  bag nInstance;
  nInstance.addElement(23);
  nInstance.addElement(2);
  nInstance.addElement(2);
  nInstance.addElement(100);

  nInstance.maxElement();
  nInstance.removeElement(100);
  nInstance.removeElement(2);
  nInstance.removeElement(2);
  nInstance.removeElement(23);
  nInstance.maxElement();
  nInstance.minElement();
return 0;
}
