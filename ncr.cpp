#include<iostream>
using namespace std;
int fact(int n ){
    int factorial=1,i;
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int ncr(int n,int r){
    int rev_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);
    return rev_n/(fact_r*fact_nmr);
}

int main(){
    int n=8;
    int r=2;
    cout<<ncr(n,r)<<endl;
    
    return 0;
}
// output= 28
           
