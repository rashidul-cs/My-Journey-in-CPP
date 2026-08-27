
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter Arrays Element: ";
    
    for (int i = 0; i<=4; i++){
        cin >> arr[i];
    }
    for (int i = 0; i<=4; i++){
        cout << arr[i] << " ";
    }

    arr[0] = 100;    //Update array
    cout << endl;

    for (int i = 0; i<=4; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
