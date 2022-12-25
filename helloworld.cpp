
#include <iostream>
#include <string>
using namespace std;

template <typename T>


void func(T t){
   cout << "single params :" << t << endl;
}

template <typename T, typename... Args> 

void func(T t, Args... args){
   cout << t << endl;
   func(args...);
}

int main(){

   string name = "hitesh";
   func(1,2,2.5, 3.5, name);
   return 0;
}
