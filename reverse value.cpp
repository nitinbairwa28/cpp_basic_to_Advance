#include<iostream>
using namespace std;
int main(){
    int rev=0,num=789,digit;
    while(num>0){
    digit=num%10;
    rev=rev*10+ digit;
    num /=10;
    }
    cout<<"reverse no. is = "<<rev;
}
// output= reverse no. is = 987
