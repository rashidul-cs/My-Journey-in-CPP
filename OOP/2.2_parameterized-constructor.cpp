
#include <iostream>
using namespace std;
class Teacher {
public:
string name;
string dept;
string subject;
double salary;
Teacher(string n, string d, string s, double sal){
    name = n;
    dept = d;
    subject = s;
    salary = sal;
}
void get_info(){
    cout << "Name: " << name << endl;
    cout << "Subject: " << subject << endl;
    cout << "Dept: " << dept << endl;
    cout << "Salary: " << salary << endl;
}
};
int main() {
    Teacher t1("Rashid", "CSE", "C++", 98000);
    t1.get_info();
    return 0;
}
