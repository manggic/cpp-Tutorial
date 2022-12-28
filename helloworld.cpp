#include <iostream>
#include <string>
#include <memory>
using namespace std;


string printMe(){
    return "I am print";
}

int main(){  


    // printMe and s will have 2 diff ref in memory
    string s = printMe();

    cout << s << endl;

    // printMe will directly ref s to the function hence moving will take place
    string && ss = printMe();

    cout << ss << endl;

    
    return 0;
}