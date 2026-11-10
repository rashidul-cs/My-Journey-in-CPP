
#include <iostream>
using namespace std;
int main(){
    int f, r, k;
    cout << "Enter the age of Fahim: ";
    cin >> f;
    cout << "Enter the age of Rahim: ";
    cin >> r;
    cout << "Enter the age of Karim: ";
    cin >> k;
    if (f == r && f == k){
        cout << "All are same ages";
    } else if (f >= r && f >= k){
        cout << "Fahim is youngest";
    } else if (r >= f && r >= k){
        cout << "Rahim is youngest";
    } else {
        cout << "Karim is youngest";
    }
    return 0;
}
