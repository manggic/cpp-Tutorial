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




class Phone{
   string _name = "";
   string _os = "";
   int _price = 0;

   public:
    Phone(); // default constructor
    Phone(const string & name, const string & os, const int & price);
    Phone(const Phone &);  // copy constructor
    string getName(){return _name;}
    ~Phone();  // destructor
};


Phone::Phone():_name("iphone 14"), _os("andriod"), _price(){
   puts("default constructor");
}

Phone::Phone(const string & name, const string & os, const int & price): _name(name), _os(os), _price(price) {
   puts("This is parameter constructor");
}

Phone::Phone(const Phone & values){
    puts("OVERWRITE copy constructor");
    _name = "N-" + values._name;
    _os = "skinned-" + values._os;
    _price = values._price;
}

Phone::~Phone(){
   cout << "Destructor called" << _name << endl;
}

int main(){
   Phone iphone;
   cout << "Name of the Phone is " << iphone.getName() << endl ;

   Phone onePlus8("OP8","Android",9000);
   cout << "Name of the Phone is " << onePlus8.getName() << endl; 

   Phone onePlus8S = onePlus8;
   cout << "Name of the Phone is " << onePlus8S.getName() << endl; 


   return 0;
}


