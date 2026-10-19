
#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout << "Class A" << endl;
    }
};
class B: public A {
    public:
    void display(){
        cout << "Class B" << endl;
    }
};
class C: public A{
    public:
    void screenshow(){
        cout << "Class C" << endl;
    }
};
int main(){
    B obj1;
    C obj2;
    obj1.show();
    obj1.display();
    obj2.show();
    obj2.screenshow();
    return 0;
}
