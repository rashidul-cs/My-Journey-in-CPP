
#include <iostream>
using namespace std;
int main(){
    int arr[] = {12, 6, 7, 34, 9, 23, 2, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);    //int take 4 byte
    int sum = 0;                          //that's why divide by 4 or sizeof(arr[0])
    for (int i = 0; i<n; i++){
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
