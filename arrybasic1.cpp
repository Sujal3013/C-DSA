#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n,i;
    cin>>n;

    
    int array[n];
    for(i=0;i<=n;i++){
        cin>>array[i];
    }
    int maxvalue=INT_MIN;
    int minvalue=INT_MAX;
/*    int maxvalue=array[1];
    int minvalue=array[1];    
    for(i=0;i<=n;i++){
        if(maxvalue<array[i]){
            maxvalue=array[i];

        }
        else{
            continue;
        }

    }
    cout<<maxvalue<<endl;

    for(i=0;i<=n;i++){
        if(minvalue>array[i]){
            minvalue=array[i];
        }
        else{
            continue;
        }
    }
    cout<<minvalue;*/

/*    for(i=0;i<n;i++){
        if(array[i]>maxvalue){
            maxvalue=array[i];
        }
        else if(array[i]<minvalue){
            minvalue=array[i];
        }
    }
    cout<<endl;
    cout<<maxvalue<<" ";
    cout<<minvalue;*/

    for(i=0;i<n;i++){
        maxvalue=max(maxvalue,array[i]);
        minvalue=min(minvalue,array[i]);
    }

    cout<<endl;
    cout<<maxvalue<<" ";
    cout<<minvalue;


    return 0;
}