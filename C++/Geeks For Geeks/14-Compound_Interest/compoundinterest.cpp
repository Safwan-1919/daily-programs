#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float p, r, t, CI, amount;
    cout<<"Enter Principal Amount (Intial Amount borrowed or invested): ";
    cin>>p;
    cout<<"Enter Annual Interest Rate (Percentage of interest rate in years): ";
    cin>>r;
    cout<<"Enter Time (in years): ";
    cin>>t;
    amount = p * pow((1+(r/100)), t);
    CI = amount - p;
    cout<<"Complex Interest (interest calculate method where the interest is added to principal and interest is calculated on new total balance): "<<CI<<endl;
    return 0;
}
