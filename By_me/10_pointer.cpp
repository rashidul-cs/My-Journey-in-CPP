
#include <iostream>
using namespace std;
int main(){
    int a = 3;
    int *ptr = &a;
    cout << "a is: " << a << endl;
    cout << "a is: " << *ptr << endl;
    cout << "a is: " << *(&a) << endl;
    cout << "Address of a: " << &(*ptr) << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of a: " << ptr << endl;
    return 0;
}
