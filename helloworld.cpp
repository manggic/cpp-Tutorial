#include <iostream>
#include <string>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}

   protected:
      Man(const string & name, const int & age): _name(name), _age(age) {}
      void run(){ puts("I can run");} 
   public:
      void sayName()const;
};


void Man::sayName()const {
   cout << "Name is " << _name << endl;
} 

class SuperMan : public Man{
   bool flight;
   public:
       SuperMan(string name): Man(name, 26 )   {}
       void run(){ puts("I can run at light speed");} 
};


class SpiderMan:public Man{
  bool webbing;
   public:
       SpiderMan(string name): Man(name, 20 )   {}
       void run(){ puts("I can run at normal speed");} 
};

int main(){
   SuperMan s1("manish");
   SpiderMan s2("manya");
   s1.run();
   s2.run();
   return 0;
}


