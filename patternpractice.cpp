#include<iostream>
using namespace std;

int main(){
    
    int r,c;
    cin>>r>>c;
    cout<<"P R A C T I C E -- P A T T E R N S"<<endl;
 //solid rectangle
    cout<<"1.RECATANGLE"<<endl;   
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
 //hollow rectangle
    for(int i=1;i<=r;i++){
        for( int j=1;j<=c;j++){
            if(i==1 || j==1 || i==r || j==c){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    //half pyramid 
    cout<<"2.PYRAMID"<<endl;
    int n;
    cin>>n;

    for( int i=1;i<=n;i++){
        for( int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }  

    //invert pyramid

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //hollow half pyramid

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==n || j==1 || i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    //hollow invert pyramid

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i==n || j==1 || i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    //full pyramid

    return 0;

}