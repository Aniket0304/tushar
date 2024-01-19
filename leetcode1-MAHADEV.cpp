#include<iostream>
using namespace std;
void findDuplicate(int arr[], int n){
    int count;
 for(int i=0; i<n;i++){

        for(int j= i+1; j<n;j++){

            if(arr[i]==arr[j]){

                int count = arr[i];
                cout<<count<<' ';
                   
}
        }
        continue;
 }
 
}
// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++)
// }


int main() {
    int arr[5]={8,7,6,3,3};
    
    findDuplicate(arr,5);
    //printArray(arr,6);
    
}

    