
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s = "Raghav is a Teacher";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
