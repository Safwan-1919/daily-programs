#include <iostream>
using namespace std;

int main() {
    int n, remainder, result = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0){
        remainder = n % 10;
        result = result * 10;
        result = result + remainder;
        n = n / 10;
    }
    cout<<"Reverse: "<<result<<endl;;
    return 0;
}
