
#include <iostream>
#include <string>
using namespace std;
class Person {    //Base/Parent Class
    public:
    string name;
    int age;
    Person(){
        cout << "Constructor" << endl;
    }
};
class Student : public Person {  //Derived/Child Class
    public:
    int rollno;
    void get_info(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll NO: " << rollno << endl;
    }
};
int main(){
    Student s1;
    s1.name = "Rashidul";
    s1.age = 44;
    s1.rollno = 6677;
    s1.get_info();
    return 0;
}
