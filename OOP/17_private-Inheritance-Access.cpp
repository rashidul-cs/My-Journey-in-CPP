
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
class Derived: private Base{
    public:
    int getProt(){
        return prot;
    }
    int getpub(){
        return pub;
    }
};
int main(){
    Derived obj;
    cout << "Private: Can not Accessed" << endl;
    cout << "Protected: " << obj.getProt() << endl;
    cout << "Public: " << obj.getpub() << endl;
    return 0;
}
