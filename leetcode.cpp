#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n!=0){
        cout<<n%10;
        if(n<0){
            n=-(n/10);
        }
        else{
            n=n/10;
        }
        
    }
}