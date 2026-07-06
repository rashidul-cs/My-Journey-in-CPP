
//Always show positive numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n > 0){
        cout << "Abslute value: " << n;
    } else {
        cout << "Abslute value: " << -n;
    }
    return 0;
}
