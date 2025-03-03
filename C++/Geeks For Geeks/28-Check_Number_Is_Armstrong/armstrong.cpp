#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder, result = 0;
    cout<<"***** Program to check whether the number is Armstrong or not *****"<<endl;
    cout<<"Enter number: ";
    cin>>n;
    original = n;
    while(n != 0){
        remainder = n % 10;
        result = result + pow(remainder, 3);
        n = n / 10;
    }
    if(result == original){
        cout<<original<<" is a armstrong number\n";
    }
    else{
        cout<<original<<" is not a armstrong number\n";
    }

    return 0;
}
