#include<iostream>
using namespace std;

int octatodeci(int num){
    int ans=0;
    int x=1;
    while(num>0){
        int y=num%10;
        ans +=x*y;
        num=num/10;
        x*=8;

    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<octatodeci(n)<<endl;

    return 0;
}