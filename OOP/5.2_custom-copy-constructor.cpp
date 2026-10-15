
#include <iostream>
using namespace std;
class Teacher{
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;
    Teacher(string n, string d, string s, double sal){
        name = n;
        subject = s;
        dept = d;
        salary = sal;
    };
    Teacher(Teacher &orgobj){
        cout << "I am custom copy constructor" << endl;
        this->name = orgobj.name;
        this->subject = orgobj.subject;
        this->dept = orgobj.dept;
        this->salary = orgobj.salary;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    Teacher t1("Rashidul", "CSE", "OOP", 60000);
    Teacher t2(t1);
    t2.getInfo();
    return 0;
}
