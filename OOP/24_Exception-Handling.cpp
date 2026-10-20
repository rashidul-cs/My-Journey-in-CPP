
#include <iostream>
using namespace std;
int main(){
    float a, b, result;
    cout << "Enter 2 Numbers for Division: ";
    cin >> a >> b;
    try{
        if (b == 0){
            throw b;
        }
        result = a/b;
        cout << "Result: " << result << endl;
    }
    catch(int c){
        cout << "Error! Derived by zero not Allowed" << endl;
    }
    return 0;
}
