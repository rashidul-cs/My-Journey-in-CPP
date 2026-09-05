
#include <iostream>
using namespace std;
int main(){
    string s = "Raghav";
    cout << s << endl;
    s.append(" Garg");    //Add Garg to the string
    cout << s << endl;
    s.pop_back();      //To Delete last character from string
    cout << s << endl;
    s.pop_back();
    cout << s <<endl;
    s.push_back('r');   //To add a character at the last to the string
    cout << s << endl;
    s.push_back('g');
    cout << s << endl;
    return 0;
}
