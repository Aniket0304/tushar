#include<iostream>
using namespace std;
int evensum(){
 int num;
    cin>>num;
    int sum = 0;
    while(num>0){
       int s=num%10;
       if (s%2==0){
            sum=sum+s;
       }
       num=num/10;
    }
    return sum;
}

int main(){
    // int n;
    // cin>>n;
    // while (n!=0){
    //     cout<<n%10;
    //     if(n<0){
    //         n=-(n/10);
    //     }
    //     else{
    //         n=n/10;
    //     }
        
    // }
    cout<<evensum();
}