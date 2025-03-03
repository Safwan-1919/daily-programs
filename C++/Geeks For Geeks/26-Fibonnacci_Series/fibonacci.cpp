#include <iostream>
using namespace std;

int main()
{
    int a, b, c, n;
    cout << "Enter number of fibonacci series you want: ";
    cin >> n;
    a = 0;
    b = 1;
    cout << "Fibonacci series upto " << n << " is :" << endl;
    cout << a << " ";
    cout << b << " ";
    for (int i = 0; i < (n - 2); i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
