// SINCE INT IS USED SO N SHOULD BE LESS THAN 10.
#include <iostream>
using namespace std;
int main(){
    cout<<"ENTER A NO. WHOSE FACTORIAL YOU WANT: ";
    int n;
    int f=1;
    cin>>n;
    for (int i=1 ; i<=n ; i++){
        f=f*i;
    }
    cout<<"FACTORIAL OF "<<n<<" IS "<<f<<endl;
    return 0;
}