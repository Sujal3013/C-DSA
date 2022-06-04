#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int original=n;

    while(n>0){
        int ld=n%10;
        sum += ld*ld*ld;
        n=n/10;
    }
    if(sum==original){
        cout<<"number is armstrong number."<<endl;
    }else{
        cout<<"number is not a armstrong number"<<endl;
    }
    
    return 0;

}