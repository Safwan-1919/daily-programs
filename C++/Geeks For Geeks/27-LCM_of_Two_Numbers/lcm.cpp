#include <iostream>
using namespace std;

int main()
{
    int n1, n2, lcm;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    lcm = n1 > n2 ? n1 : n2;
    while (1)
    {
        if (lcm % n1 == 0 && lcm % n2 == 0)
        {
            cout << "LCM of " << n1 << " and " << n2 << " is " << lcm << endl;
            break;
        }
        lcm++;
    }
    return 0;
}
