#include <iostream>
using namespace std;
int main(){
    cout<<"ENTER DECIMAL NUMBER: ";
    int d;
    cin>>d;
    int r=0;
    int pow=1;
    while(d>0){
        r=r+d%2*pow;
        d=d/2;
        pow=pow*10;
        cout<<"S";
    }
    cout<<d<<" IN BINARY: "<<r;
    return 0;
}