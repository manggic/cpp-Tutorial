

// #include <iostream>
// int main(){
//     std::cout<<"hello world";
// }

#include <iostream>
#include <string>
using namespace std;

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
