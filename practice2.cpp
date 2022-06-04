#include <iostream>
using namespace std;

int main(){
    int sum=0;

    for( int a=0;a<10;a++){
        int x;
        cout<<"ENTER A NO.\n";
        cin>>x;
        sum+=x;
    }
    cout<<"the average value is:"<<sum/10.0<<endl;
    return 0;
}    
