#include <iostream>
using namespace std;
int main(){
    cout<<"ENTER A BINARY NO. : ";
    int b;
    cin>>b;
    int d=0;
    int pow=1;
    cout<<b<<" IN DECIMAL FORM IS: ";
    while(b>0){
        d=d+b%10*pow;
        b=b/10;
        pow=pow*2;
    }
    cout<<d;
    return 0;
}