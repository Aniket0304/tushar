/*if a=2,b=3
a=10,b=11
ans=3 counting all the 1's */

#include<iostream>
#include<math.h>
using namespace std;
int badd(){
    int a,b,s,f;
    cin>> a >>b ;
    int ans=0;
    int i=0;
    while (a!=0){
        int bit= a & 1;
        ans= (bit * pow(10, i)) +ans;
        a=a>>1; //it also means divide by 2.
        i++;
    }
    int answ=0;
    int j=0;
    while (b!=0){
        int bi= b & 1;
        answ= (bi * pow(10, j)) +answ;
        
        b=b>>1; //it also means divide by 2.
        j++;
    }
    int sum=0;
    while (ans!=0){
        if (ans%10==0){
            ans=1;
        }
        else{
            f=ans%10;
        }
        
        sum=sum+f;
        ans=ans/10;
    }
    int add=0;
    while (answ!=0){
        if (answ%10==0){
            answ=1;
        }
        else{
            s=answ%10;
        }
        
        add=add+s;
        answ=answ/10;
    }
    int p=sum+add;
    return p;
}
int main(){
    cout<< badd() <<endl;
}