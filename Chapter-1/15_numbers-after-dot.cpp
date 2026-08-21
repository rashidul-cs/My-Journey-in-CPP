
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float r;
    cout << "Enter radius: ";
    cin >> r;
    float pi = 3.1416;
    cout << fixed << setprecision(2);
    cout << "Area of a Circle: " << pi*r*r << " Square units" << endl;
    return 0;
}
