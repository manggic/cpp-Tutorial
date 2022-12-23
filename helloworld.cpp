

// #include <iostream>
// int main(){
//     std::cout<<"hello world";
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *myp;
    try
    {
        myp = new int[100];
        cout << *myp;
    }
    catch (...)
    {
        cout << "failed in allocating memory\n";
    }

    delete[] myp;
    return 0;
}
