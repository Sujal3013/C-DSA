#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
//dowhile looping
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
//infinite looping
    

    for( ; ; ){
        cout<<"infinite loop"<<endl;
    }

    return 0;
}