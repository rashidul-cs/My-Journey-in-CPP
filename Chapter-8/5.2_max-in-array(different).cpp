
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {23, 556, 778, 332, 7834};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MIN;
    for (int i = 0; i<n; i++){
        if (arr[i] > mx) mx = arr[i];
    }
    cout << "Max: " << mx;
    return 0;
}
