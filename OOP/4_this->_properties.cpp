
#include <iostream>
using namespace std;
class Teacher {
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;
    Teacher(string name, string dept, string subject, double salary){
        this-> name = name;
        this-> dept = dept;
        this-> subject = subject;
        this-> salary = salary;
    }
    void get_info(){
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    Teacher t2("Rashidul", "CSE", "C++", 78000);
    t2.get_info();  //Default Copy constructor-Invoke
    return 0;
}
