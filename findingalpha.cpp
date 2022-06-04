#include<iostream>
using namespace std;

void charfind(char character){
    if(character>='A' && character<='Z' || character>='a' && character<='z'){
        cout<<"CHARACTER IS AN ALPHABET.";
    }else{
        cout<<"CHARACTER IS NOT AN ALPHABET.";
    }
    return;
}

int main(){
    char ch;
    cout<<"ENTER ANY CHARACTER:";
    cin>>ch;
    charfind(ch);
    return 0;
}