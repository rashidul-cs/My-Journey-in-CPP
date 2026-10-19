
// virtual Base Class (Diamond Problem)
#include <iostream>
using namespace std;
class Student{
    public:
    int id = 7844;
};
class Mark: virtual public Student{
    public:
    void show(){
        cout << "Mark Class" << endl;
    }
};
class Info: virtual public Student{
    public:
    void display(){
        cout << "Info Class" << endl;
    }
};
class Derived: public Mark, public Info{
};
int main(){
    Derived obj;
    cout << "ID: " << obj.id << endl;
    obj.show();
    obj.display();
    return 0;
}
