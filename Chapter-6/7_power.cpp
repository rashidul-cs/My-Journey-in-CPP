
// if input = 6, 3; 6^0 * 6^1 to 6^3 
#include <iostream>
using namespace std;
int power(int a, int b){
    if (b == 0){
        return 1;
    }
    return a * power(a, b-1);
}
int main(){
    int a, b;
    cout << "Enter Base: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;
    cout << "Result: " << power(a, b);
    return 0;
}
