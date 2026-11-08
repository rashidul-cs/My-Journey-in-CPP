
#include <iostream>
using namespace std;
int main(){
    float r;
    cout << "Enter radius: ";
    cin >> r;
    float pi = 3.1416;
    float volume = ((4/3.0)*pi*(r*r*r));
    cout << "Volume of a Sphere: " << volume << " Cubic Units" << endl;
    return 0;
}
