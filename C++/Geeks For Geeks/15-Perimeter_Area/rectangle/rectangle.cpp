#include <iostream>
using namespace std;

int main() {
    float length, breadth, perimeter, area;
    cout<<"***** Perimeter and Area of Rectangle *****"<<endl;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    cout<<"Perimeter: "<<perimeter<<endl;
    cout<<"Area: "<<area<<endl;
    return 0;
}
