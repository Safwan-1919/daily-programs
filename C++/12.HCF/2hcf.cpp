#include <iostream>
using namespace std;

int main() {
    int n1, n2, hcf;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    while(n1!=n2){
        if(n1>n2){
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
    cout<<"HCF: "<<n1<<endl;
    return 0;
}


// n1=12 and n2=18
// 18>12 => 18-12 => 6 
// n1=12 and n2=6
// 12>6 => 12-6 => 6 
// n1=6 and n2=6
// both are equal so loop breaks
// n1=6 => HCF