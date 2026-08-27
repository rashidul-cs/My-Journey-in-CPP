
#include <iostream>
using namespace std;
int main(){
    int arr[5];    //declaration
    arr[0] = 2;    //set
    arr[1] = 6;
    arr[2] = 98;
    arr[3] = 33;
    arr[4] = 26;
    for (int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    // we can also print one by one like this
    //cout << arr[0] << " ";
    //cout << arr[1] << " ";
    return 0;
}
