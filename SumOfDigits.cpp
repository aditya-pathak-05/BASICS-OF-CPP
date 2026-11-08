#include <iostream>
using namespace std;
int main(){
    cout<<"ENTER A NUMBER WHOSE SUM OF DIGITS YOU WANT TO FIND: ";
    int n;
    cin>>n;
    int sum=0;
    int nr; // LAST DIGIT OF NO.
    while(n!=0){
        nr=n%10;
        sum=sum+nr;
        n=n/10;
    }
    cout<<"SUM OF ALL THE DIGITS OF THE GIVEN NO. IS: "<<sum<<endl;
    return 0;
}