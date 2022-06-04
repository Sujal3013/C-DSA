#include <iostream>
using namespace std;

void substrascii(string s,string ans){
    if(s.length()==0){ //base condition
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code = ch;
    string ros = s.substr(1);

    substrascii(ros,ans);
    substrascii(ros,ans+ch);
    substrascii(ros,ans+to_string(code));

}

int main(){
    substrascii("AB","");
    return 0;
}