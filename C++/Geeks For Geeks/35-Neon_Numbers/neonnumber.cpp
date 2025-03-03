#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, square;
    cout<<"Enter number: ";
    cin>>n;
    square = n * n;
    while(square > 0){
        sum = sum  + (square % 10);
        square = square / 10;
    }
    if(sum == n){
        cout<<n<<" is a neon number\n";
    }
    else{
        cout<<n<<" is not a neon number\n";
    }
    return 0;
}
