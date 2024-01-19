#include<iostream>
using namespace std;
int painter_partition(int arr[],int n, int m){
    int painter=1;
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=0;
    int e=sum;
    int mid=s+(e-s)/2;
    int unitsum=0;
    while(s<=e){
        for (int j=0;j<n;j++){  
        if (unitsum+arr[j]>=mid){
            unitsum+=arr[j];
            e=mid-1;
            return unitsum;
        }
        else{
            s=mid+1;
            painter++;
            return false;
        }
        mid = s+(e-s)/2;
    }
        }
}

int main(){
    int m;
    cin>>m;
    int arr[4]={5,5,5,5};
    cout<<painter_partition(arr,4,m);
}