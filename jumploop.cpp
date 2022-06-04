#include<iostream>
using namespace std;

int main()
{
    int pocketmoney=3000;
    for(int date=2;date<=30;date++){

        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"Go Out!!"<<endl;
        pocketmoney=pocketmoney-300;
    }
}