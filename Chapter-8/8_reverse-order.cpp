
#include <iostream>
using namespace std;
int main(){
    int arr[] = {12, 6, 7, 34, 9, 230, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int b[n];
    for (int i = 0; i<n; i++){
        b[i] = arr[n-1-i];    //logic for reverse order
        cout << b[i] << " ";
    }
    return 0;
}
