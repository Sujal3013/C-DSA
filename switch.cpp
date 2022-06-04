#include<iostream>
using namespace std;

int main() {
 
    char button;

    cout<<"input a character:";
    cin>>button;
    
    /*if (button=='A'){
        cout<<"NAMASTE"<<endl;
    } else if(button=='B'){
        cout<<"HELLO"<<endl;
    } else if(button=='C'){
        cout<<"CIAO"<<endl;
    }else if(button=='D'){
        cout<<"HOLA"<<endl;
    }else{
        cout<<"STILL GOTTA LEARN THIS LANGUAGE :0"<<endl;
    }*/

    switch (button)
    {
    case 'a':
        cout<<"NAMASTE"<<endl;
        break;
    case 'b':
        cout<<"HELLO"<<endl;
        break;
    case 'c':
        cout<<"CIAO"<<endl;
        break;
    case 'd':
        cout<<"HOLA"<<endl;
        break;   
    default:
        cout<<"I am still learning more :)";
        break;
    }

    return 0;
}