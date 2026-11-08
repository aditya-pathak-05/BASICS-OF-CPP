#include <iostream>
using namespace std;
int main(){
    cout<<"ENTER THE VALUE OF N: ";
    int n;
    cin>>n;
    cout<<"ENTER X: ";
    int x;
    cin>>x;
    int s=0;
    for(int i=1;i<=n;i++){
        if (i%x==0){
            s=s+i;
        }
    }
    cout<<"SUM OF ALL NOS BTW 1 TO "<<n<<" DIVISIBLE BY "<<x<<" IS: "<<s;
    return 0;
}