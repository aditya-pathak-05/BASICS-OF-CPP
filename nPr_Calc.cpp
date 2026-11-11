//TO CALCULATE Permutation (nPr) FOR N AND R(BOTH N AND R SHOULD BE LESS <=12)
#include <iostream>
using namespace std;
int fact(double n){
    double f=1;
    for (double i=1; i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    cout<<"YOU ARE GOING TO  CALCULATE nCr PUT VALUES CAREFULLY\n";
    cout<<"ENTER VALUE OF n: ";
    double n;
    cin>>n;
    cout<<"ENTER VALUE OF r: ";
    double r;
    cin>>r;
    double bc;
    bc=fact(n)/fact(n-r);
 
    cout<<"VALUE OF "<<n<<" C "<<r<<" IS: "<<bc;
    return 0;
}