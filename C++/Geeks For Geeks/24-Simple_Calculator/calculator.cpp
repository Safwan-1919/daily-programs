#include <iostream>
using namespace std;

int main() {
    char op;
    int a, b, result=0;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter the operator: ";
    cin>>op;
    switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            cout<<"Invalid Operator!!!"<<endl;
    }
    cout<<a<<" "<<op<<" "<<b<<" = "<<result<<endl;
    return 0;
}
