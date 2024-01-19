
// AP=(3*n+7)
//i/p=n
//o/p=nth term

#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    bool prime = false;
    int i=2;
    while(i<num){
        if (num%i==0){
            prime=false;
            break;
        }
        else{
            prime=true;
        }
        i++;

    }
    if(prime==true){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

}