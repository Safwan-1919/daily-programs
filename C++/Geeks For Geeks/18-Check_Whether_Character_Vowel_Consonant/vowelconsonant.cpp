#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter the alphabet: ";
    cin>>ch;
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }
    return 0;
}
