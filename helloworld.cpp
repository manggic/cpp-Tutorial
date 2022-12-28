#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Corners{
  int a;
};


ostream& operator<<( ostream& stream , const Corners& corners){
    stream << corners.a ;
    return stream; 
}

int main(){  
  vector<int> vety;
  vety.push_back(2);
  vety.push_back(3);
  vety.push_back(4);

  // for(auto i = vety.begin() ;i != vety.end(); i++){
  //     cout <<  *i << endl;
  // }

  vector<Corners> corners;

  // corners[0].a =2;

  // cout << corners[0].a ;

  for(int i = 0 ; i < corners.size() ; i++  ){
    cout << corners[i] ;
  }


   return 0;
}