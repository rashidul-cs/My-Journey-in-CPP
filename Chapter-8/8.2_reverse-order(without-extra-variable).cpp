
#include <iostream>
using namespace std;
int main(){
    int arr[] = {12, 6, 7, 34, 9, 230, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array: ";
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //Reverse
    int i = 0;    //first element of array
    int j = n-1;  //last element of array
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
