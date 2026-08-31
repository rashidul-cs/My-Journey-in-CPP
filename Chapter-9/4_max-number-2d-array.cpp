
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[4][2] = {{76, 81}, {13, 76}, {82, 91}, {80, 90}};
    int mx = INT_MIN;
    for (int i = 0; i<4; i++){
        for (int j = 0; j<2; j++){
            if (arr[i][j] > mx) mx = arr[i][j];
        }
    }
    cout << "Maximum 2d Array: " << mx;
    return 0;
}
