#include <iostream>
using namespace std;

int main(){
    
    int x;
    cout<<"Enter a number:";
    cin>>x;

    if( x%2==0 && x%3==0){
        cout<<"the no. is divisible by both 2 & 3 and hence by 6 too"<<endl;
    }else if( x%2==0 ){
        cout<<"the no. is divisible only by 2"<<endl;
    }else if( x%3==0){
        cout<<"the no. is divisible only by 3"<<endl;
    }else{
        cout<<"the no. is neither divisible by 2 nor by 3"<<endl;
    }
    return 0;

}