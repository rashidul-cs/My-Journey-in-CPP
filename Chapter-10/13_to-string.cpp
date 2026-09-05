
#include <iostream>
using namespace std;
int main(){
    int x = 4534563;
    string s = to_string(x);  //make int to string
    s = s + "dd";    //same as: s += "dd" 
    cout << s << endl;
    return 0;
}
