#include<iostream>
using namespace std;

void maxima(int num1,int num2,int num3){
    if(num1>num2 && num1>num3){
        cout<<num1<<"is the greatest number."<<endl;
    }else if(num2>num3 && num2>num1){
        cout<<num2<<"is the greatest number."<<endl;
    }else if(num3>num2 && num3>num1){
        cout<<num3<<"is the greatest number."<<endl;
    }else if(num1==num2 && num1>num3){
        cout<<"more than one maximum:"<<num1<<endl;
    }else if(num2==num3 && num2>num1){
        cout<<"more than one maximum:"<<num2<<endl;
    }else if(num3==num1 && num1>num2){
        cout<<"more than one maximum:"<<num3<<endl;
    }
    return;
}

void minima(int num1,int num2,int num3){
    if(num1<num2 && num1<num3){
        cout<<num1<<"is the smallest number."<<endl;
    }else if(num2<num3 && num2<num1){
        cout<<num2<<"is the smallest number."<<endl;
    }else if(num3<num2 && num3<num1){
        cout<<num3<<"is the smallest number."<<endl;
    }else if(num1==num2 && num3>num2){
        cout<<"more than one minimum value:"<<num1<<endl;
    }else if(num2==num3 && num1>num2){
        cout<<"more than one minimum value:"<<num2<<endl;
    }else if(num3==num1 && num2>num3){
        cout<<"more than one minimum value:"<<num3<<endl;
    }else{
        cout<<"all value are equal."<<endl;
    }
    return;

}

int main(){
    int a,b,c;
    cout<<"ENTER THREE DIFFERENT NUMBERS:";
    cin>>a>>b>>c;
    maxima(a,b,c);
    minima(a,b,c);
    return 0;
}