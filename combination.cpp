#include<iostream>
using namespace std;

int fact(int num){
    int p=1;
    for(int i=1;i<=num;i++){
        p=p*i;
    }
    return p;
}
/*alternative way
void comb(int num,int r){
    int a=fact(num);
    int b=fact(r);
    int x=num-r;
    int d=fact(x);
    int c=a/(b*d);
    cout<<c<<endl;


}*/

int main(){
    int num,r;
    cin>>num>>r;
    int ans=fact(num)/(fact(r)*fact(num-r));
    cout<<ans<<endl;
    return 0;
}