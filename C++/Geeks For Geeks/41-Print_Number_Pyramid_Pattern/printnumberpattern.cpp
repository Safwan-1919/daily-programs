#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=i; j<=i+(i-1); j++){
            cout<<j<<" ";
        }
        for(int j=i+(i-2); j>=i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
