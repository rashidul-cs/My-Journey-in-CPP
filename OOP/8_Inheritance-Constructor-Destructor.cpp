
#include <iostream>
using namespace std;
class Person {    //Base/Parent Class
    public:
    Person(){
        cout << "Person Constructor" << endl;
    }
    ~Person(){
        cout << "Person Destructor" << endl;
    }
};
class Student : public Person {  //Derived/Child Class
    public:
    Student(){
        cout << "Student Constructor" << endl;
    }
    ~Student(){
        cout << "Student Destructor" << endl;
    }
};
int main(){
    Student s1;
    return 0;
}
