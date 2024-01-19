#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for (int i =0;i<n;i++){
        for (int j=i+1;j<n;j++){
        if (arr[i]>arr[j]){
          swap(arr[i],arr[j]);
        }
        
      }
      cout<<arr[i]<<" ";
    } 
    }

int main(){
  int arr[5]={6,2,8,4,10};
  bubble_sort(arr,5);
}