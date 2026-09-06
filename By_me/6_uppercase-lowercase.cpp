
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z'){  //ASCCI VALUE: a = 97
        cout << ch << " is lowercase";
    } else {
        cout << ch << " is uppercase";  //ASCCI VALUE: A = 65
    }
    return 0;
}
