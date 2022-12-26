#include <iostream>
#include <string>
#include <memory>
using namespace std;


class User{
 public:
    User(){ cout << "User created";}
    ~User(){ cout << "User created";}

    void testFunc(){ cout << "I m a test func\n";} 
};

int main(){  
   {
       unique_ptr<User> sam =  make_unique<User>();
       sam->testFunc();
    //    unique_ptr<User> sam = samm; // not allowed
   }

   {
       shared_ptr<User> tim = make_shared<User>();
       shared_ptr<User> timm = tim;
   }
    return 0;
}