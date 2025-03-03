#include <iostream>
using namespace std;

int main()
{
    float temperature, fahtocel;
    cout << "Enter the temperature in fahrenheit: ";
    cin >> temperature;
    fahtocel = (temperature - 32) * 5 / 9;
    cout << "Fahrenheit to Celsius : " << fahtocel << endl;
    return 0;
}
