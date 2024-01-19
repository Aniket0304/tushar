#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if (n%i==0){
            //cout<<"not a prime number";
            isprime=0;
            break; // here "break" is important because compiler is dividing every number whether it is divisible or not
        }
        
    }
    if (isprime==0){
        cout<<"is not a prime number";
    }
    else{
        cout<<"a prime number";

    }
}