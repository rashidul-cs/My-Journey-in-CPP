
#include <iostream>
using namespace std;
class Teacher {
public:
Teacher(){
    cout << "Hi, I am a constructor\n";
}
};
int main() {
    Teacher t1;
    return 0;
}
