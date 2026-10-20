
#include <iostream>
using namespace std;
class Student{  //Abstract Class
    public:
    virtual void show() = 0;  //pure virtual function
};
class Mark: public Student{
    public:
    void show(){
        cout << "Mark Class" << endl;
    }
};
class Mark2: public Student{
    public:
    void show(){
        cout << "Mark2 Class" << endl;
    }
};
int main(){
    Student *ptr;
    Mark obj1;
    Mark2 obj2;
    ptr = &obj1;
    ptr->show();
    ptr = &obj2;
    ptr->show();
    return 0;
}
