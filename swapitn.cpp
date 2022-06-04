#include<iostream>
using namespace std;

void swapping(int x,int y){
    int z=x;
    int q=y;
    y=z;
    x=q;
    cout<<"AFTER SWAP...."<<endl;
    cout<<"FIRST INTEGER:"<<x<<endl;
    cout<<"SECOND INTEGER:"<<y<<endl;    
    return;

}

int main(){
    int a,b,z,q;
    cout<<"ENTER FIRST INTEGER:";
    cin>>a;
    cout<<"ENTER SECOND INTEGER:";
    cin>>b;
    swapping(a,b);
    return 0;
}