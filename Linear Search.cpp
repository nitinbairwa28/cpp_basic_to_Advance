#include<iostream>
using namespace std;
int linear(int arr[],int target,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }

    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=6;
    int size=9;
    cout<<linear(arr,target,size);
}
// output= 5
