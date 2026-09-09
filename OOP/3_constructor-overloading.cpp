
#include <iostream>
using namespace std;
class Teacher {
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;
    Teacher(){
        cout << "Hi, I am a Constructor" << endl;
    }
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    void get_info(){
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main(){
    Teacher t1;
    Teacher t2("Rashidul", "CSE", "C++", 78000);
    t2.get_info();
    return 0;
}
