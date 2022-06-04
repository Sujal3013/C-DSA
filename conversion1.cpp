#include<iostream>
using namespace std;

int bintodeci(int num){
    int ans=0;
    int x=1;
    while(num>0){
        int y=num%10;
        num=num/10;
        ans +=x*y;
        x*=2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<bintodeci(n)<<endl;

    return 0;
}