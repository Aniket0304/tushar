#include<iostream>
using namespace std;

int pivot(int arr[],int n ){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
while (s<e){
    if (arr[mid]>=arr[0]){//upar matlab yaha pe. yaha par agar condition badlegi toh neeche apne aap change aayega. 
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;//jaise hi upar change karenge waise hi yaha pe change aayega.
}
return s; 
}

int binarysearch(int arr[],int s, int n,int key){
int i=s,e=n ;
int a = (i+(e-i))/2;
while (i<=e){
if (arr[a]==key){
   return a;
}
if (arr[a]<key){
    i=a+1;
}
else {
    e=a-1;
}
a = (i+(e))/2;
}
return -1; 
}


int main (){
    int key;
    cin>>key;
int arr[5]={7,9,1,2,3};
int pi = pivot(arr,5);
if (key>=arr[pi]&&key<=arr[4]){
cout<<binarysearch(arr,pi,4,key);
}
else{
    cout<<binarysearch(arr,0,pi,key);
}
}