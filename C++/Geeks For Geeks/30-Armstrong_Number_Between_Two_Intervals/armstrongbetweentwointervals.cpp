#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lb, ub;
    cout<<"Enter the lower bound: ";
    cin>>lb;
    cout<<"Enter the upper bound: ";
    cin>>ub;
    cout<<"Series of Armstrong Number from "<<lb<<" to "<<ub<<": "<<endl;
    for(int n=lb; n<=ub; n++){
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
        if(result == original){
            cout<<original<<" ";
        }
    }
    cout<<endl;
    return 0;
}
