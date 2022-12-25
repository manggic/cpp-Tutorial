
#include <iostream>
using namespace std;
int factorial(int a);

// 3! =>  3*2*1
// 4! =>  4*3*2*1

int main(){
    cout << "factorial of 4 is :" <<factorial(4);
    return 0;
}

int factorial(int a){
  if(a == 1){
     return 1;
  }
   return a * factorial(a-1);
}
