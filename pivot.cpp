#include <iostream >
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
return arr[s]; 
}
int main(){
int arr[5]={8,10,17,1,3};
cout<<pivot(arr,6);
}
