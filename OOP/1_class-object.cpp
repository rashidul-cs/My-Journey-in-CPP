
#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary; 

public:
    string name;
    string dept;
    string subject;

    // Setter
    void setSalary(double s) {
        salary = s;
    }

    // Getter
    double getSalary() {
        return salary;
    }

    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;
    t1.name = "Rashidul";
    t1.dept = "Computer Science"; 
    t1.subject = "C++";
    t1.setSalary(82000);

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    // t1.changeDept("Software Engineering");
    // cout << "New Department: " << t1.dept << endl;
    return 0;
}
