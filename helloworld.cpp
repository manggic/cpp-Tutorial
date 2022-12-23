
#include <iostream>
#include <string>
using namespace std;



string api_call(){
   return "got the data";
} 


int another_api_call(){
    return 1;
}

int main()
{
    auto response = api_call();    
    auto res = another_api_call();    
    return 0;
}
