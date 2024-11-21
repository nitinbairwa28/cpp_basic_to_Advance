#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the alphabet:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase";

    } else if(ch>='A' && ch<='Z'){
        cout<<"upperacase";
    }
    else{
        cout<<"speacial character";
    }
}
/* output= 
enter the alphabet:w
Lowercase             */
