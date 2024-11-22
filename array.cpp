#include<iostream>
using namespace std;
int main(){
    int size=5,i;
    int arr[]={123, 45,-24,90,1};
    int smallest= INT8_MAX;
   int index = 0;
    
    for(i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            index=i;
        }
      
    }
                cout<<smallest<<endl<<index<<endl;

    
}
/* output=  -24
             2    */
