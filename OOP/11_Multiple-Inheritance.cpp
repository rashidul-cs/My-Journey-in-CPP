
#include <iostream>
using namespace std;
class shop{    //Base Class
    public:
    float payment = 6000;
};
class shop2 {    //Base Class
    public:
    float due = 300;
};
class owner : public shop, public shop2 {    //Derived Class

};
int main(){
    owner obj1;
    cout << "Payment: " << obj1.payment << endl;
    cout << "Due: " << obj1.due << endl;
    return 0;
}
