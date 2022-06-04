#include<iostream>
using namespace std;

void votercheck(int a){
    if(a>=18){
        cout<<"YOU ARE ELIGIBLE FOR VOTING. :D";
    }else{
        cout<<"YOU ARE NOT ELIGIBLE FOR VOTING.HAVE PATIENCE.. :)";
    }
}

int main(){
    int a;
    cout<<"Enter your age in years as on registration date( e.g. if aged 23 years & 4 months then enter 23):"<<endl;
    cin>>a;
    votercheck(a);

}