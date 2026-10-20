
#include <iostream>
using namespace std;
class Student{
    public:
    virtual void show(){
        cout << "Student Class" << endl;
    }
};
class Mark: public Student{
    public:
    void show(){
        cout << "Mark Class" << endl;
    }
};
int main(){
    Student obj1;
    Mark obj2;
    Student *ptr;
    ptr = &obj1;
    ptr->show();
    ptr = &obj2;
    ptr->show();
    return 0;
}
