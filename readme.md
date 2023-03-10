
link : https://youtu.be/FpfHmAkRVK4 <br>
timing = 09:39:30



* 1 byte is 8 bit ( 11111111 )
* int - 32 bit ( 4 byte )
* short int - 16 bit ( 2 byte )
* long int - 64 bit ( 8 byte )
* char - 8 bit ( 1 byte )
* we can have 2 diff func with same name in cpp


### Pointer 

```
int *p;
int number = 200;
p = &number    // p will store memory address of number
```

### Array
```
int arr[4] = { 1, 2, 3, 4}
cout << arr     // This will print memory address of first location of the array
court << *arr  // 1
```

### Reference
```
int arr[3] = { 10, 2, 3};
int &ref = arr[2];
ref = 100; 
cout << arr[2] << endl; // 100
int *ptr = arr;
ptr++;
cout << *ptr; // 2
```

### Take input from user
```
#include <iostream>
#include <string>
using namespace std;
int main(){
   string yourName;
   cout << "Enter your name : ";
   getline(cin, yourName);
   cout << "Hello " + yourName + " welcome to this cpp program";
    return 0;
}
```

### sizeof
```
printf("size of int is %ld bits", sizeof(int) * 8);
```

### binary & hexa
```
int fun = 0x16;  // hexa
printf("value of fun is : %d", fun); // 22

int fun = 0b00010110; // binary
```


### puts method
```
string today;
getline(cin, today);
if(today == "sunday"){
    puts("Yay!!! Today is sunday");
}else{
    puts("No off today");
}
```

### for range loop
```
int arr[4] = { 13,4,5,6}; 
for(int i : arr){
    cout << i << endl;
}
```

### Looping through string
```
char name[] = "manya";
for(int i=0 ; name[i];i++){
    cout << name[i]<< endl;
}


for(char *cp = name ; *cp!= 0; cp++){
    cout << *cp << endl;
}


for(char i : name){
    if(i == 0) break;
    cout << i << endl;
}
```


### Try Catch
```
float balance = 23.33;

try{
    throw balance;
}catch(float f){
    cout << "float error";
}catch(...){
    cout << "Handle any error occured";
}
```


### functions 

```
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
```

### Memory Leak
```
int *myp;

try{
    myp = new int[100];
    cout << *myp;
}catch (...){
    cout << "failed in allocating memory\n";
}

delete[] myp;
```

### struct

```
struct User{
    const int uId;
    const char *name; 
    const char *emamil;  // pointer is constant not the value
    int course_count;
};

int main()
{
    User mickey = {001, "mickey", "mickey@gmail.com", 2 };
    User donald = {002, "donald", "donald@gmail.com", 2 };
    User * d = &donald;
    d->course_count = 6;
    cout << donald.course_count;
    return 0;
}
```

### Preprocessor
```
#define BOLD 3

int main()
{
    cout << BOLD ; // 3
    return 0;
}
```

### Enum
```
enum MsOffice{
    BOLD = 20,
    ITALICS,
    UNDERLINE,
    COSSED
};

int main()
{
    cout << BOLD ;  // 20
    return 0;
}
```


### auto 
```
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
    
    cout << "Response of api call is : " << response << endl;
    cout << "Res of another api call is : " << res << endl;
    
    if( typeid(response) == typeid(string) ){
        cout << "type of both ID matched\n";
    }
    
    if( typeid(res) == typeid(int) ){
        cout << "type of both ID is int\n";
    }
    return 0;
}
```

*  stack has predefined size
*  heap is predefined but can grow


### stack and heap
```
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
```

### call by value
```
void lifeUp(int life){
     ++life;
}

int life = 3;
lifeUp(life); 
cout << life << endl;
```

### call by ref
```
// method 1
void lifeUp(int *life){
     ++(*life);
}

int life = 3;
lifeUp(&life); 
cout << life << endl;


// method 2
void lifeUp(int &life){
     ++life;
}

int life = 3;
lifeUp(life); 
cout << life << endl;
```


### Creating our own header
```
// main.cpp file
#include <iostream>
#include <string>
#include "adder.h"


// adder.h file
#ifndef adder_h 
#define adder_h 

void lifeUp(int &life){
     ++life;
}
#endif
```

### Template 
```
template <typename T>

T addMe(T a, T b){
   return a + b;
}

cout << "integer sun is :" << addMe(10,20)<< endl;
cout << addMe(10.21,20.81) << endl;
```


### Pointer to function
```
void interesting(){
    puts("interesting");
}

void (*ptrToInteresting)() = interesting; // ptr to function 
ptrToInteresting();
```

### Null Pointer
```
void printVal(int * a){
   printf("Pointer value is :%p\n", a);
}

printVal(nullptr);
```

### Factorial
```
#include <iostream>
using namespace std;
int factorial(int a); // function definition

// 3! =>  3*2*1
// 4! =>  4*3*2*1

int main(){
    cout << "factorial of 4 is :" <<factorial(4);
    return 0;
}

int factorial(int a){
  if(a == 1){
     return 1;
  }
   return a * factorial(a-1);
}
```

### Macros
```
macros helps us to reduce our same var changes in lots of places
just a single change in MACRO will change the entire

#define end return 0 
#define console_log(a) cout << a << endl

int main(){
   int x = 10;
   cout << x;
   console_log(15);
   end;
}
```

### Variadic template
```
template <typename T>

void func(T t){
   cout << "single params :" << t << endl;
}

template <typename T, typename... Args> 

void func(T t, Args... args){
   cout << t << endl;
   func(args...);
}

int main(){
   string name = "hitesh";
   func(1,2,2.5, 3.5, name);
   return 0;
}
```

### class with this
```
class Rectangle{
   double _length;
   double _breadth;

   public:
     Rectangle(double l = 2.0, double b = 2.0){
         _length = l;
         _breadth = b; 
     }

     double Area(){
        return _length * _breadth;
     }

     int compare(Rectangle rectangle){
        return this->Area() > rectangle.Area();
     }
};

int main(){
   Rectangle r1(10, 20);
   cout << "Area of my rectangle is : " << r1.Area() << endl;

   Rectangle r2(1, 2);
   if(r1.compare(r2)){
      cout << "r1 is bigger \n";
   }else{
      cout << "r2 is bigger \n";
   }
   return 0;
}

```


### Inheritance
```
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
```

### friend
```
class Man{
   int _age;

   // same as keeping this in protected class
   friend class SuperMan;
   public:
   Man(int age):_age(age){};

};

class SuperMan: public Man{
public:
   SuperMan(int age):Man(age){};
   // i can access _age cauze i m friend with base class
   void logPriAge(){printf("Logging private Age %d\n", _age );}
};

int main(){
    SuperMan s1(2);
    s1.logPriAge();
    return 0;
}
```

### multiple inheritance
```
class Money{
   public:
      void gotMoney(){cout << "Got 5K\n";}
};

class SuperMan: public Man, public Money{
public:
   SuperMan(int age):Man(age){};
   void logPriAge(){printf("Logging private Age %d\n", _age );}
};

int main(){
    SuperMan s1(5);
    s1.gotMoney();
    return 0;
}
```

### virtual function
```
class One{
   public:
    virtual void intro(){
       cout << "I am One\n";
    }
};

class Two: public One {
    public:
    void intro(){
       cout << "I am Two\n";
    }
};
class Three: public One {
    public:
    void intro(){
       cout << "I am Three\n";
    }
};


int main(){
    One *a;
    Two b;
    Three c;
    a = & b;
    a->intro();
    return 0;
}
```


### Swap of 2 numbers
```
void swap(int &a, int &b){
   int tmp = a;
   a = b;
   b = tmp;
}

int main(){  

    int a = 10, b = 5;
    swap(a, b); 

    cout << "A :" << a << endl;
    cout << "B :" << b << endl;
    return 0;
}
```

### Swap without using 3rd variable
```
int main(){  
    int a = 15, b = 2;
    a = b - a;
    b = b - a;
    a = a + b;
    cout << "a :" << a << endl; 
    cout << "b :" << b << endl; 
    return 0;
}
```

### Move semantics
```
// Here we are not copying, we are just moving the data
// tmp won't take extra memory in this case 

void swap(int &a, int &b){
   int tmp = move(a);
   a = move(b);
   b = move(tmp);
}
```

### Move semantics more example
```
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
```

### vector
```
#include <iostream>
#include <vector>
using namespace std;

struct Corners{
    int a, b, c, d;
};

// overloading operator <<
ostream& operator<<(ostream& stream , const Corners & corner){
    stream << corner.a << corner.b  << corner.c << corner.d;
    return stream;
}


int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
   
   for(auto i = v1.begin();i!=v1.end();i++){
        cout << *i << " ";
    }
    
    vector<Corners> corners;
    
    
    corners.push_back({ 1,2,3,4});
    corners.push_back({ 5,6,7,8});
    
   for(int i = 0; i < corners.size();i++){
        cout << corners[i] << " ";
   } 
    
   return 0;
}

```

### lambda function 
```
int main()
{
     []{}();
     []{cout << "lambda func\n";}();
     [](){return 200;}; 
     
     auto sum = [](auto a, auto b){return a + b;};
     cout << "Sum of a and b is :" << sum(10, 5) << endl;
     cout << "Sum of a and b is :" << sum(10.5, 5.5); 
     
   return 0;
}
```


### files Handling
```
int main(){  
  
  char * originalFile = "originalFile.txt";
  char * editedFile = "editedFile.txt";
  char * info = "i am information";


  //rename old file 'originalFile' into 'editedFile'
  rename(originalFile, editedFile);
 
  // delete this file
  remove(editedFile);

  // open file in write mode
  FILE * fh = fopen(originalFile, "w");

  fputs(info, fh); // add info content into the originalFile.txt
  fclose(fh);

  // open this file in append mode 
  FILE * fh = fopen(originalFile, "a");


  // read a file and console output on screen
  FILE * fh = fopen(originalFile, "r");
  char string[100];
  while(fgets(string, 100, fh)) {
    printf("%s\n", string);
}
  return 0;
}  
```


### functor
```
class MyFloat{
   float ft;

   public:
      MyFloat(){
        ft = 0.1;
      }
      void getValue(){
        cout << ft << endl;
      }

      // overloading operator ()
      void operator()(float v){
           ft += v;
      }
};

int main(){  
  
  MyFloat floaty;
  floaty.getValue();
  floaty(2);
  floaty.getValue();

  return 0;
}
```


### sort
```
int main(){  
  
  int numbers[6] = {3, 4, 2, 1, 5, 9};

  cout << "Unsorted array :" << endl;
  for(int n: numbers){
    cout << n << " ";
  }

  sort(numbers, numbers + 6);
  
  cout << "\nsorted array :" << endl;
   for(int n: numbers){
    cout << n << " ";
  }
  
  return 0;
}
```