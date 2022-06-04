#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    for(j=1;j<=7;j=j+3) {
        for(i=1;i<=j;i++) {
            cout<<"*";
        }
    cout<<"\n";        
    }
    return 0;

}