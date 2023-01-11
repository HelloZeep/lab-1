#include <iostream>
#include <string>

using namespace std;



int main()
{
    int a = 10;
    int* pa = &a;

    cout << "a = " << a << endl;
    cout << "*pa = " << *pa << endl;

    *pa = 5;




    return 0;
}