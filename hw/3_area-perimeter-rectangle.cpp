
#include <iostream>
using namespace std;
int main(){
    float l = 30, b = 20;
    double area = l*b;
    double perimeter = 2*(l+b);
    if (area > perimeter){
        cout << "The Area is greater than the Perimeter" << endl;
    } else {
        cout << "The Area is not greater than the Perimeter" << endl;
    }
    return 0;
}
