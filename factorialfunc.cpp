#include<iostream>
using namespace std;

void fact(int num){
    int p=1;
    for(int i=1;i<=num;i++){
        p=p*i;
    }
    cout<<p<<endl;
}

int main(){
    int num;
    cin>>num;
    fact(num);
    return 0;
}