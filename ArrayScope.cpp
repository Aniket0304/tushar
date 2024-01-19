#include<iostream>
using namespace std; 
void update (int arr[], int n){
    arr[1]=120; 
// yaha par kar ye rahe hai ki array ki value nahi daal rahe uska address daal 
// rahe hai toh yaha par main function wali value bhi change hogi.

    for (int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }cout<<endl;
}
int main(){
int arr[3]={1,2,3};
update(arr,3);
for (int i=0;i<3;i++){
        cout<<arr[i]<<' ';
    }
}