
#include <iostream>
using namespace std;
int main(){
    float p, c, m;
    cout << "Enter the mark of Physics: ";
    cin >> p;
    cout << "Enter the mark of Chemistry: ";
    cin >> c;
    cout << "Enter the mark of Math: ";
    cin >> m;
    if (p <= 33 || c <= 33 || m <= 33){
        cout << "You are failed due to less marks in each subject";
    } else if ((p+c+m)/3.0 < 40) {
        cout << "You are failed due ot less marks of total parcentage";
    } else {
        cout << "Congratulations! You are Passed";
    }
    return 0;
}
