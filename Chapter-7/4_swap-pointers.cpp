
#include <iostream>
using namespace std;
void swap (int *a, int *b){  
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 12;
    int y = 45;
    cout << x << " " << y << endl;
    swap(&x, &y);    //(call by reference/pass by reference)
    cout << x << " " << y << endl;
    return 0;
}
