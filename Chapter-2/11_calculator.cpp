
#include <iostream>
using namespace std;
int main(){
    int n1;
    cout << "Enter 1st number: ";
    cin >> n1;
    char op;   //operator
    cout << "Enter +,-,*,/: ";
    cin >> op;
    int n2;
    cout << "Enter 2nd number: ";
    cin >> n2;
    if (op == '+') cout << n1+n2;
    if (op == '-') cout << n1-n2;
    if (op == '*') cout << n1*n2;
    if (op == '/') cout << n1/n2;
    return 0;
}
