
#include <iostream>
#include <string>



struct User{
    const int id;
    int age;

    User(): id(001), age(25){}
};

int main(){
    using namespace std;
    // stack 
    int score = 100;
    User mike;
   

    // heap
    int * heap_score = new int;
    *heap_score = 200;
    User * nike = new User();


    delete heap_score;
    delete nike;
    return 0;
}
