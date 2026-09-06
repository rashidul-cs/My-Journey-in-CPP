
#include <iostream>
using namespace std;
int main(){
    float income;
    cout << "Enter your total Income: ";
    cin >> income;
    float tax = 0;
    if (income < 250000){
        tax = 0;
    } else if (income < 500000){
        tax = (income-250000)*(5/100.0);
    } else if (income < 1000000){
        tax = (income-500000)*(20/100.0) + (12500);
    } else {
        tax = (income-1000000)*(30/100.0) + (100000) + (12500);
    }
    cout << "Total Tax: " << tax << endl;
    return 0;
}
