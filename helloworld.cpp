#include <iostream>
#include <string>
using namespace std;

// class Man{
//     string _name;
//     int _age;
//     Man(){}

//    friend class SuperMan;
//    protected:
//       Man(const string & name, const int & age): _name(name), _age(age) {}
//       void run(){ puts("I can run");} 
//    public:
//       void sayName()const;
// };


// void Man::sayName()const {
//    cout << "Name is " << _name << endl;
// } 

// class SuperMan : public Man{
//    bool flight;
//    public:
//        SuperMan(string name): Man(name, 26 )   {}
//        void run(){ puts("I can run at light speed");} 
//        void logPriAge(){printf(" Logging Private Age is %d\n", _age);}  // now cauze i m friend i can access the age
// };


// class SpiderMan:public Man{
//   bool webbing;
//    public:
//        SpiderMan(string name): Man(name, 20 )   {}
//        void run(){ puts("I can run at normal speed");} 
// };

// int main(){
//    SuperMan s1("manish");
//    SpiderMan s2("manya");

//    s1.logPriAge();
//    s1.run();
//    s2.run();
//    return 0;
// }





class Man{
   int _age;
   friend class SuperMan;
   public:
   Man(int age):_age(age){};

};

class SuperMan: public Man{
public:
   SuperMan(int age):Man(age){};
   void logPriAge(){printf("Logging private Age %d\n", _age );}
};

int main(){
    SuperMan s1(2);
    s1.logPriAge();
    return 0;
}