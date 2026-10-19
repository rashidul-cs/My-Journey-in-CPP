
#include <iostream>
using namespace std;
class Base{
    private:
    int pvt = 1;
    protected:
    int prot = 2;
    public:
    int pub = 3;
    int getPvt(){
        return pvt;
    }
};
class Derived: public Base{
    public:
    int getProt(){
        return prot;
    }
};
int main(){
    Derived obj;
    cout << "Private: " << obj.getPvt() << endl;
    cout << "Protected: " << obj.getProt() << endl;
    cout << "Public: " << obj.pub << endl;
    return 0;
}
