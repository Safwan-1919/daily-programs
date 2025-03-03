#include <iostream>
using namespace std;

int main()
{
    int n, range, total;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter range: ";
    cin >> range;
    for (int i = 1; i <= range; i++)
    {
        total = n * i;
        cout << n << " * " << i << " = " << total << endl;
    }
    return 0;
}
