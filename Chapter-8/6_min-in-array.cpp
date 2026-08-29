
#include <iostream>
using namespace std;
int main(){
    int arr[] = {12, 6, 7, 34, 9, 230, 2, 8, -6, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mn = arr[0];
    for (int i = 0; i<n; i++){
        mn = min(mn, arr[i]);
    }
    cout << "Min: " << mn;
    return 0;
}
