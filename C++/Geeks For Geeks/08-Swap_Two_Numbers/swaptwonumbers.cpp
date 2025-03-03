#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    return 0;
}
