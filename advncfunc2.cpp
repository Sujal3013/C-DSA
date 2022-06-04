#include<iostream>
using namespace std;
void pythocheck(int n1,int n2,int n3){
    if(n1*n1 == (n2*n2 + n3*n3) || n2*n2 == (n1*n1 + n3*n3) || n3*n3 == (n2*n2 +n1*n1) ){
        cout<<n1<<","<<n2<<" and "<<n3<<" are pythogrean triplets."<<endl;
    }else{
        cout<<"The given triplet is not a pyhtogorean triplet. :|";
    }
    return;
} 


/*alternative code
bool check(int x,int y,int z){
    int a=max(x,y,z),b,c;
    if(a==x){
        b=y;
        c=z;
    }else if(a==y){
        b=z;
        c=x;
    }else{
        b=x;
        c=y;
    }
    if(a*a == b*b + c*c){
        return true;
    }else{
        return false;
    }
} 

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"it is a pythogorean triplet.";
    }
    else{
        cout<<"it is not a pythogorean triplet.";
    }
}        */


int main(){
    int a,b,c;
    cout<<"ENTER ANY THREE NATURAL NUMBERS:";
    cin>>a>>b>>c;
    pythocheck(a,b,c);

    return 0;
}