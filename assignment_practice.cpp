#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"normal array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            cout<<arr[i][j];
        }
    }
    cout<<"upper triangular array:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            if(i<j){
                cout<<arr[i][j];
            }else{
                arr[i][j]=0;
                cout<<arr[i][j];
            }
        }
    }    
    return 0;
}