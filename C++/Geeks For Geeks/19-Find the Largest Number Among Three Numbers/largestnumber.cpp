#include <iostream>
using namespace std;

int main() {
    // using compound expression
    int a, b, c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<a<<" is the largest number"<<endl;
    }
    else if(b>=a && b>=c){
        cout<<b<<" is the largest number"<<endl;
    }
    else{
        cout<<c<<" is the largest number"<<endl;
    }
    cout<<endl;
    if(a>=b){
        if(a>=c){
            cout<<a<<" is the largest number"<<endl;
        }
        else{
            cout<<c<<" is the largest number"<<endl;
        }
    }
    else{
        if(b>=c){
            cout<<b<<" is the largest number"<<endl;
        }
        else{
            cout<<c<<" is the largest number"<<endl;
        }
    }
    cout<<endl;
    int max = a;
    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }
    cout<<max<<" is the largest number"<<endl;
    
    return 0;
}
