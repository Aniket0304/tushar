#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sorting(int arr[], int n){
    for (int i =0; i<n;i++){
        int minindex=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]< arr[minindex])
            minindex=j;
        }
        cout<<arr[minindex]<<" ";
        swap(arr[minindex],arr[i]);  
    }
    
}
int main(){
    int arr[9]={24,72,98,13,87,66,52,51,36};
    sorting(arr,9);
}
// for (int i =1; i<n ; i++){
//         for (int j=0; j<n-i;j++){
//             if(arr[j]>arr[j+1])
//             swap(arr[j],arr[j+1]);
//         }
//     }