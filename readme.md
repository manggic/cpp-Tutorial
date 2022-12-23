
link : https://youtu.be/FpfHmAkRVK4 <br>
timing = 05:06:45



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