#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<=2*i; j++){
            if(j==0 || j==2*i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int j=1; j<=2*n-1; j++){
        cout<<"*"; 
    }
    return 0;
}
