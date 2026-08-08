
#include <iostream>
using namespace std;
int main(){
    //rectangle have to do
    //rows = m, col = 5
    int m;
    cout << "Enter the number of rows: ";
    cin >> m;
    int n;
    cout << "Enter the number of cols: ";
    cin >> n;
    for (int i = 1; i<=m; i++){
        for (int j = 1; j<=n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
