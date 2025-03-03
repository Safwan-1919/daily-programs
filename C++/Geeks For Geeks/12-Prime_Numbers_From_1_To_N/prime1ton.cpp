#include <iostream>
using namespace std;

int main()
{
    int n, prime;
    cout << "Enter number of prime numbers you want to print: " << endl;
    cin >> n;
    cout<<"1 is not a prime number"<<endl;
    for (int i = 2; i <= n; i++)
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            cout << i << " is a prime number" << endl;
        }
        else
        {
            cout << i << " is not a prime number" << endl;
        }
    }
    return 0;
}
