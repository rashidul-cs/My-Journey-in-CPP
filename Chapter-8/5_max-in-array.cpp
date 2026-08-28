
#include <iostream>
using namespace std;
int main(){
    int arr[] = {12, 6, 7, 34, 9, 230, 2, 8, 3, 6, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = arr[0];
    for (int i=1; i<n; i++){
        mx = max(mx, arr[i]);
    }
    cout << "Max: " << mx;
    return 0;
}
