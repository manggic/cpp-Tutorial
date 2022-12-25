#include <iostream>
#include <string>
using namespace std;



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


