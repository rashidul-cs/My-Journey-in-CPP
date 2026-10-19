
#include <iostream>
using namespace std;
class Shop{
    public:
    void show(){
        cout << "Shop Class" << endl;
    }
};
class Shop2 {
    public:
    void show(){
        cout << "Shop2 Class" << endl;
    }
};
class Owner: public Shop, public Shop2{
};
int main(){
    Owner obj;
    obj.Shop::show();    //Scope resolution Operator
    obj.Shop2::show();    //Scope resolution Operator
    return 0;
}
