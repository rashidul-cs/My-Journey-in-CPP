
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if ((n%3 == 0 || n%5 == 0) && (n%15 != 0)){
        cout << "The number is divisible by 3 or 5 but not divisible by 15" << endl;
    } else {
        cout << "Condition does not match" << endl;
    }
    return 0;
}
