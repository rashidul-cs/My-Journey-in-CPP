
#include <iostream>
using namespace std;
int main(){
    int a = 20;
    int &b = a;
    b = 30;
    cout << "Value is " << b << endl;
    return 0;
}
