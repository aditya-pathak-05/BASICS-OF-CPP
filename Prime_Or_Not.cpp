#include <iostream>
using namespace std;
int main(){
    cout<<"ENTER A NO. THAT YOU WOULD LIKE TO CHECK: "<<endl;
    int n;
    cin>>n;
    int d=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            d=1;
            break;
        } 
    }
    if ((int) d==0){
        cout<<"IT IS A PRIME NUMBER\n";
    } else if((int) d==1){
        cout<<"IT IS NOT A PRIME NUMBER\n";
    } 
    return 0;   
}