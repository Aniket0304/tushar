#include<iostream>
using namespace std;
bool ispossible(int arr[], int n, int m,int mid){
    int studentcount=1;
    int pagesum =0;
    for (int i=0;i<n;i++){
        if (pagesum+arr[i]< mid){
            pagesum+=arr[i];
        }
        else {
            studentcount++;
            if (studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return false;
        }

int bookallott(int arr[],int n,int m){
    int sum=0;
    int s=0;
    for (int i =0;i<n;i++){
        sum +=arr[i];
    }
    int ans=-1;
    int e=sum;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        if (ispossible(arr,m,n,mid)){
            ans = mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid =s+(e-s)/2;
    }
    return ans;
    
}

int main(){
    int m;
    cin>>m;
    int arr[4]={10,20,30,40};
    ispossible(arr,m,4,);
    cout<<bookallott(arr,4,m);
}