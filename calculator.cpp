#include<iostream>
using namespace std;
int main(){
    int n  ,m;
    char x;
    cout<<"Enter the first number "<<endl;
    cin>>n ;
    cout<<"Enter the second number"<<endl;
    cin>>m;
    cout<<"Enter the operator"<<endl;
    cin>>x;
    switch(x){
        case '+': cout<<"The sum of "<< n <<" and " << m << " is "<<n+m<<endl;
        break;

        case '-': cout<<"The differnce of "<< n <<" and " << m << " is "<<n-m<<endl;
        break;

        case '*': cout<<"The multiplication of "<< n <<" and " << m << " is "<<n*m<<endl;
        break;

        case '/': cout<<"The division of "<< n <<" and " << m << " is "<<n/m<<endl;
        break;
        
        default: cout<<"Please enter a valid case "<<endl;
        
    }

}