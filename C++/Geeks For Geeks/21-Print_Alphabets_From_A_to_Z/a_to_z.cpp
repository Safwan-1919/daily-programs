#include <iostream>
using namespace std;

int main() {
    cout<<"Print from A to Z"<<endl;
    for(char c = 'A'; c <= 'Z'; c++){
        cout<<c<<" ";
    }
    cout<<endl;
    cout<<"Print from a to z"<<endl;
    for(char c = 'a'; c <= 'z'; c++){
        cout<<c<<" ";
    }
    cout<<endl<<endl;
    cout<<"Print from A to Z"<<endl;
    for(char i = 65; i <= 90; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Print from a to z"<<endl;
    for(char i = 97; i <= 122; i++){
        cout<<i<<" ";
    }

    return 0;
}
