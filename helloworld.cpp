

// #include <iostream>
// int main(){
//     std::cout<<"hello world";
// }

#include <iostream>
#include <string>
using namespace std;


void sayHello(){
    puts("Hello \n");
}
int calcSum(int a,int b){
   return a + b;
}
int main()
{
    cout << calcSum(10,20) << endl;
    sayHello();
    return 0;
}
