#include<iostream>
using namespace std;

void sumn(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    cout<< "Sum  of all natural numbers till "<<num<<" :"<<sum<<endl;
    return ;
}

int main(){
    int n;
    cin>>n;
    sumn(n);
    return 0;
}