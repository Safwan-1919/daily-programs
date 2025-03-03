#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
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
