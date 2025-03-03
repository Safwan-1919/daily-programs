#include <iostream>
using namespace std;

int main() {
    int lb, ub;
    cout<<"Enter the lower bound: ";
    cin>>lb;
    cout<<"Enter the upper bound: ";
    cin>>ub;
    for(int i=lb; i<=ub; i++){
        int prime = 1;
        for(int j=2; j<i; j++){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime){
            cout<<i<<" - Prime"<<endl;
        }
        else{
            cout<<i<<" - Not prime"<<endl;
        }
    }
    return 0;
}
