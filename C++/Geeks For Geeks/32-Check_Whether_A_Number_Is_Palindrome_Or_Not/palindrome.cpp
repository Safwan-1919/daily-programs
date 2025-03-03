#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"***** Program to check whether the number is Palindrome or not *****\n";
    cout<<"Enter number: ";
    cin>>n;
    int original = n;
    int remainder, result = 0;

    while(n > 0){
        remainder = n % 10;
        result = (result * 10) + remainder;
        n = n / 10;
    }

    if(original == result){
        cout<<"Original: "<<original<<endl;
        cout<<"Reverse: "<<result<<endl;
        cout<<original<<" is a palindrome"<<endl;
    }
    else{
        cout<<"Original: "<<original<<endl;
        cout<<"Reverse: "<<result<<endl;
        cout<<original<<" is not a palindrome"<<endl;
    }
    return 0;
}
