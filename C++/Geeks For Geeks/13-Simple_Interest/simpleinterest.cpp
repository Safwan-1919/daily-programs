#include <iostream>
using namespace std;

int main() {
    float p, r, t, SI;
    cout<<"Enter Principal Amount (Initial amount borrowed or invested): ";
    cin>>p;
    cout<<"Enter Rate of Interest (Percentage of interest rate per year): ";
    cin>>r;
    cout<<"Time (in years): ";
    cin>>t;
    SI = (p*r*t) / 100;
    cout<<"Simple Interest: (interest calculate method which is proportional to p, r , t and it is fixed interest rate): "<<SI<<endl;
    return 0;
}
