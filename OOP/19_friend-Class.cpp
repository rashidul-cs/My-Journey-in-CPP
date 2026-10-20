
#include <iostream>
using namespace std;
class A{
    private:
    int n1 = 10;
    protected:
    int n2 = 20;
    friend class B;
};
class B{
    public:
    void add(A &obj){
        cout << "A+B: " << obj.n1 + obj.n2 << endl;
    }
};
int main(){
    A a;
    B b;
    b.add(a);
    return 0;
}
