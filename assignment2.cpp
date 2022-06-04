#include <iostream>
using namespace std;

int min2(int x,int y){
    int mini;
    if(x==y){
        cout<<"Both integers are equal to: ";
        return x;
    }else{
        if(x<y){
        mini=x;
        }else{
        mini=y;
        }
        return mini;
    }
    
}
int min3(int u,int v,int w){
    int mini;
    mini=min2(u,v);
    mini=min2(mini,w);
    if(u==v && v==w){
        cout<<"All three integers are equal to";
    }
    return mini;

}

int min4(int n1,int n2,int n3,int n4){
    int mini,mini1;
    mini=min2(n1,n2);
    mini1=min2(n3,n4);
    mini=min2(mini,mini1);
    if(n1==n2 && n2==n3 && n3==n4){
        cout<<"All four integers are equal to";
    }
    return mini;

}

int main(){
    int a,b,c,d;
    cout<<"Enter the two integer values: ";
    cin>>a>>b;
    cout<<endl;
    cout<<min(a,b)<<endl;
    cout<<"Enter the third integer value: ";
    cin>>c;
    cout<<endl;
    cout<<min3(a,b,c)<<endl;
    cout<<"Enter the forth integer value: ";
    cin>>d;
    cout<<endl;
    cout<<min4(a,b,c,d)<<endl;
    

    return 0;
}