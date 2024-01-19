//with more precision upto decimal points.
//we'll use or create another function.
#include <iostream>
using namespace std;
int sqrt(int arr[],int num){
    int s=0, ans=0;
    int e=num-1;
    int mid=s+(e-s)/2;
    for (int i=0;i<num;i++){
        if ((mid*mid)>num){
            e=mid-1;
        }
        else if((mid*mid)==num){
            return mid;
        }
        else{
            s=mid+1;
            ans=mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
double moreprecision(int num,int precision,int temp ){
    double factor=1;
    double ans=temp;
    for (int i=0;i<=precision;i++){
        factor=factor/10;
        for (int j=ans;j*j<num;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main()
{
   int num;
   cin>>num;
   int a=1;
   int arr[num];
   for (int i = 0;i<num;i++){
    arr[i]=a;
    a++;
   }
   int temp=sqrt(arr,num);
   cout<<moreprecision(num,3,temp);
   
}