#include<iostream>
using namespace std;
int decimaltobinary(int num){
    int x=1;
    int ans=0;
    while(x<=num){
        x*=2;
    }x/=2;
    while(x>0){
        int lstdgt=num/x;
        num-=lstdgt*x;
        x/=2;
        ans=ans*10+lstdgt;


    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter a decimal number:"<<endl;
    cin>>n;
    cout<<decimaltobinary(n);
    return 0;
}