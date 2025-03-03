#include <iostream>
using namespace std;

int main()
{
    int n, prime = 1;
    cout << "Enter number: ";
    cin >> n;
    if (n < 2)
    {
        cout << n << " is not a prime number" << endl;
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}
