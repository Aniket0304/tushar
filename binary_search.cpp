//linear search zyada se zyada worst case me 1000 ke 1000 baar run hoga lekin.
//binary search me aisa nahi hota har bar aadha aadha kam hota jaayega.
//jaise ki ye 1000 ka phle 500 phir 250 phir aadha.


#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
int i=0 ,e=n-1;
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


int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    cout<<binarysearch(even,6,2);
    return 0;
}
