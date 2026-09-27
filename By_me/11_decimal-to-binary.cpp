
//Decimal to Binary
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int temp[32];
    if (n == 0 || n == 1){
        cout << "Binary: " << n;
    } else {
        int i = 1;
        while (n > 0){
            temp[i] = n%2;
            n /= 2;
            i++;
        }
        cout << "Binary: ";
        for (int j = i-1; j >= 1; j--){
            cout << temp[j];
        }
    }
    return 0;
}
