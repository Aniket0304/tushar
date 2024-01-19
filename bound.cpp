#include <iostream>
using namespace std;
void bound(int arr[],int n,int key){
int i=0 ,e=n-1;
int a = (i+(e-i))/2;
while (i<=e){
if (arr[a]==key){
   cout<<a<<' ';
    i=a+1;   
}
if (arr[a]<key){
    i=a+1;
}
else {
    e=a-1;
}
a = (i+(e))/2;
}

}
int main(){
int even[6]={1,2,3,3,4,5};
bound (even,6,3);
return 0;
}