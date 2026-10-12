
#include <iostream>
using namespace std;
int main(){
    int i = 3;
    int *ptr = &i;
    cout << "i is: " << i << endl;
    cout << "i is: " << *ptr << endl;
    cout << "i is: " << *(&i) << endl;
    cout << "Address of i: " << ptr << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Address of i: " << &(*ptr) << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "i is: " << *(*(&ptr)) << endl;
    return 0;
}
