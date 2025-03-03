#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"***** Check number is even or odd *****"<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    if(n%2 == 0){
        cout<<n<<" is even"<<endl;
    }
    else{
        cout<<n<<" is odd"<<endl;
    }
    return 0;
}
