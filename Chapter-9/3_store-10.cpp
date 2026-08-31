
#include <iostream>
using namespace std;
int main(){
    int arr[5][5];
    for (int i = 0; i<=4; i++){     //we can write here (i<5 and j<5) 
        for (int j = 0; j<=4; j++){
            arr[i][j] = 10;
        }
    }
    for (int i = 0; i<=4; i++){     //we can write here (i<5 and j<5) 
        for (int j = 0; j<=4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
