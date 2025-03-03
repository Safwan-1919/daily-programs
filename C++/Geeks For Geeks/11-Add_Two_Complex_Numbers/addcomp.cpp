#include <iostream>
using namespace std;

int main() {
    int compReal1, compReal2, compImag1, compImag2, sumReal, sumImag;
    cout<<"Enter the first complex number (1st - real part | 2nd - imaginary part): ";
    cin>>compReal1>>compImag1;
    cout<<"Enter the second complex number (1st - real part | 2nd - imaginary part): ";
    cin>>compReal2>>compImag2;
    cout<<"First complex number is: "<<compReal1<<" + "<<compImag1<<"i"<<endl;
    cout<<"Second complex number is: "<<compReal2<<" + "<<compImag2<<"i"<<endl;
    sumReal = compReal1 + compReal2;
    sumImag = compImag1 + compImag2;
    cout<<"Sum of your both complex number is: "<<sumReal<<" + "<<sumImag<<"i";
    return 0;
}
