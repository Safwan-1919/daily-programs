#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter number: ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "Factorial of " << n << " is " << fact << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;

    return 0;
}
