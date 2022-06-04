#include<iostream>
using namespace std;
int decimaltooctal(int num){
    int x=1;
    int ans=0;
    while(x<=num){
        x*=8;
    }x/=8;
    while(x>0){
        int lstdgt=num/x;
        num-=lstdgt*x;
        x/=8;
        ans=ans*10+lstdgt;


    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter a decimal number:"<<endl;
    cin>>n;
    cout<<decimaltooctal(n);
    return 0;
}