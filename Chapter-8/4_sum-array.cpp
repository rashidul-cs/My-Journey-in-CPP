
#include <iostream>
using namespace std;
int main(){
    int arr[] = {12, 6, 7, 34, 9, 23};    // we can use here: long long int
    int sum = 0;
    for (int i = 0; i<=5; i++){    // we can use here: int n, i<=sizeof(n)
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
