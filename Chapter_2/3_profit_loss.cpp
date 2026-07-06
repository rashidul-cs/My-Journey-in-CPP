
#include <iostream>
using namespace std;
int main(){
    int cp;
    cout << "Enter Cost Price: ";
    cin >> cp;
    int sp;
    cout << "Enter Sell Price: ";
    cin >> sp;
    if (sp > cp){
        cout << "Profit: " << sp-cp;
    } else if (sp < cp){
        cout << "Loss: " << cp-sp;
    } else {
        cout << "No Profit No Loss";
    }
    return 0;
}
