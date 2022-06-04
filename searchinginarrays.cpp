#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    int array[n];

    for(i=0;i<n;i++){
        cin>>array[i];
    }
    int x;
    cout<<"Enter number to be checked:";
    cin>>x;


    for(i=0;i<n;i++){
        if(x==array[i]){
            j=i;
        }
        else{
            cout<<"-1";
        }
    }
    cout<<j;
    return 0;

}