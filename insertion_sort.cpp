#include <iostream>
using namespace std;
void insertion_sort(int arr[],int n ){
for (int i=1; i<n;i++){
    int h=arr[i];
    int j=i-1;
    for (;j>=0;j--){
        if (arr[j] > h){
            arr[j+1]=arr[j];
        } 
        else{
            break;
        }
                 
    }
    arr[j+1]=h;
    cout<<arr[j+1]<<" "; 
}
// main part tha element store karana wo "h" ke form me kara diya hai
// baaki aakhri me replace kar denge h wale se 
}
int main(){
    int arr[5]={6,4,2,3,1};
    insertion_sort(arr,5);
}