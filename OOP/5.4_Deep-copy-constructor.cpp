
// Deep Copy
#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    double *cgpaptr;
    Student(string name, double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    Student (Student &obj){
        this->name = obj.name;
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaptr << endl;
    }
};
int main(){
    Student s1("Rashidul", 3.9);
    Student s2(s1);
    s2.getInfo();
    *(s2.cgpaptr) = 4.0;
    s1.getInfo();
    s2.name = "Rashid";
    s2.getInfo();
    return 0;
}
