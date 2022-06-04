#include<iostream>
using namespace std;

int main(){
    int n;
    int a=1;
    cin>>n;
    int x;

    while(a<=10) {
        x=n*a;
        cout<<n<<"*"<<a<<"="<<x;
        a=a+1;
        
    }

     
    return 0;
}