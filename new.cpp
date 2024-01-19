#include<iostream> 
using namespace std;
int findDuplicate(int arr[],int l){
    int n= l-1;

    int sum= (n* (n+1))/2;

    

    int ans=0;

    for(int i=0; i<l; i++)

    {

         ans= ans+ arr[i];

    }

 

    return (ans-sum);
}


int main(){
int arr[6]={1,2,3,2,5,3};
cout<<findDuplicate(arr,6);
}