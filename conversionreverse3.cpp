#include<iostream>
using namespace std;
string decimaltohexadeci(int n){
    int x=1;
    string ans="";
    while(x<n){
        x*=16;
    }x/=16;
    while(x>0){
        int lstdgt=n/x;
        n-=lstdgt*x;
        x/=16;
        if(lstdgt<=9){
            ans=ans+to_string(lstdgt);
        }else{
            char c='A'+lstdgt-10;
            ans.push_back(c);
        }

    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<decimaltohexadeci(n);
    return 0;
}