#include <iostream>
using namespace std;
int main(){
    int n;
    int c=0;
    cout<<"ENTER VALUE OF N\n";
    cin>>n;
    for(int i=1; i<=n; i++){
        c=c+i;
    }
    cout<<"SUM OF FIRST N NO.S ARE: "<<c<<"\n";
    return 0;
}