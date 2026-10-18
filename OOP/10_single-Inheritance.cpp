
#include <iostream>
using namespace std;
class Shop{
    public:
    int payment = 3000;
};
class Shop2: public Shop{
    public:
    int due = 200;
};
int main(){
    Shop2 obj;
    cout << "Payment: " << obj.payment << endl;
    cout << "Due: " << obj.due << endl;
    return 0;
}
