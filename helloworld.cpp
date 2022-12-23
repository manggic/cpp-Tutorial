
#include <iostream>
#include <string>
   using namespace std;

void lifeUp(int &life){
     ++life;
}


int main(){
 
    int life = 3;
    lifeUp(life); 
    cout << life << endl;
    return 0;
}
