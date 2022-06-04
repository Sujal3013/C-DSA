#include<iostream>
using namespace std;

int fact(int num){
    int p=1;
    for(int i=1;i<=num;i++){
        p=p*i;
    }
    return p;
}


int main(){
    int num;
    cin>>num;

    for(int i=0;i<=num;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;

    }
  
    return 0;
}