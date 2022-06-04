#include<iostream>
using namespace std;

int frndspairing(int n){

    if(n==0||n==1||n==2){
        return n;
    }

    return frndspairing(n-1) + frndspairing(n-2)*(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<frndspairing(n)<<endl;
    return 0;
}