
// Here given 3 sides value of triangle so apply mathematical law to find Area of a Triangle
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float area(float a, float b, float c){
    float s = (a+b+c)/2.0;
    return (sqrt(s*(s-a)*(s-b)*(s-c)));
}
int main(){
    float a, b, c;
    cout << "Enter Length: ";
    cin >> a;
    cout << "Enter Breadth: ";
    cin >> b;
    cout << "Enter Height: ";
    cin >> c;
    if (a+b>c && b+c>a && a+c>b){
        cout << fixed << setprecision(2);
        cout << "Area of a Triangle: " << area(a, b, c) << " square units" << endl;
    } else {
        cout << "Condition doesn't match";
    }
    return 0;
}
