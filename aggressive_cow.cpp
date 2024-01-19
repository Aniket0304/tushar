#include<iostream>
using namespace std;
int aggressive_cow(int arr[], int n){
    int s=0;
    int e=arr[5];
    int mid=(e-s)/2;
    int ans=0;
    while(s<e){
           for (int j=0;j<n;j++){
            if(arr[j]-arr[0]<mid){//main key thi arr[j]-arr[0] wala ye bas main part tha poore code ka. 
                s=mid+1;
                ans=arr[s];            
            }
            else{
                e=mid-1;
            }
            mid=(e-s)/2;
           
        }
    }
    return ans;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<aggressive_cow(arr,6)<<" ";
}