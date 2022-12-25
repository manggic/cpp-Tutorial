#include <iostream>
#include <string>
using namespace std;

class User{
   int _secret = 333;  // by default this is private
   string message = "messsage";  // by default this is private
   public:
       string name = "default";
       void classMessage(){cout << "classs is great, " << name << endl;}

       void consoleMessage();
       int getSecret()const{return _secret;}
       void setSecret(const int & newsecret){_secret = newsecret;}
};

void User::consoleMessage(){
   cout << "Message of User class is :" << message << endl;
}


int main(){
   User manish;
   manish.setSecret(66);
   // cout << manish.getSecret();
   manish.consoleMessage();


   const User rock;
   cout << rock.getSecret();
   return 0;
}


