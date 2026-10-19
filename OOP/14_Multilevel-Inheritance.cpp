
#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout << "Class A" << endl;
    }
};
class B : public A{
    public:
    void display(){
        cout << "Class B" << endl;
    }
};
class C : public B{
    public:
    void screenshow(){
        cout << "Class C" << endl;
    }
};
int main(){
    C obj1;
    obj1.show();
    obj1.display();
    obj1.screenshow();
    return 0;
}
