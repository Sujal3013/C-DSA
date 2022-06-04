#include<iostream>
using namespace std;

void odev(int num){
    if(num%2==0){
        cout<<"NUMBER IS EVEN";
    }
    else{
        cout<<"NUMBER IS ODD";
    }
    return;
}

int main(){
    int n;
    cin>>n;
    odev(n);
    return 0;
}