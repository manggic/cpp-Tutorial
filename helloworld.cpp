
#include <iostream>
#include <string>
#include "adder.h"
using namespace std;

template <typename T>

T addMe(T a, T b){
   return a + b;
}


void interesting(){
    puts("interesting");
}

int main(){
   void (*ptrToInteresting)() = interesting; // ptr to function 
   ptrToInteresting();
    return 0;
}
