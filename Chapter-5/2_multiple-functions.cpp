
#include <iostream>
using namespace std;

void usa(){
        cout << "You are in USA" << endl;
    }
void bangladesh(){
    cout << "You are in Bangladesh" << endl;
    usa();
}
int main(){
    cout << "You are in main function" << endl;
    bangladesh();
    return 0;
}
