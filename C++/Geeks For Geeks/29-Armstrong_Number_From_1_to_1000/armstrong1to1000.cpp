#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout<<"Series of Armstrong Number from 1 to 1000: \n";
    for(int n=1; n<=1000; n++){
        int original = n;
        int remainder, result = 0;
        int digits = 0;

        int temp = n; 
        while(temp != 0){
            temp = temp / 10;
            digits++;
        }

        temp = n;
        while(temp != 0){
            remainder = temp % 10;
            result = result + pow(remainder, digits);
            temp = temp / 10;
        }

        if(original == result){
            cout<<original<<" ";
        }
    }
    cout<<endl;
    return 0;
}
