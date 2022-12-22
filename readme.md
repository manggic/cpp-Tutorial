
link : https://youtu.be/FpfHmAkRVK4 <br>
timing = 03:32:12



* 1 byte is 8 bit ( 11111111 )
* int - 32 bit ( 4 byte )
* short int - 16 bit ( 2 byte )
* long int - 64 bit ( 8 byte )
* char - 8 bit ( 1 byte )



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







