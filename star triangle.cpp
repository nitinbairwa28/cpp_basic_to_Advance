#include<iostream>
using namespace std;
int main(){
    int i,j,n=6;

    for(i=0;i<n-1;i++){
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/* output=
*
**
***
****
*****          */
