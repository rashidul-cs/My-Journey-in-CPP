
#include <iostream>
using namespace std;
int main(){
    // 4, 7, 10, 13, 16
    int n;
    cout << "How many terms: ";
    cin >> n;
    int a = 4;
    for (int i = 1; i<=n; i++){
        cout << a << " ";
        a += 3;
    }
    return 0;
}
