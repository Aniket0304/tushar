#include<iostream>
using namespace std;
int main(){
    //int n;
    //cin>>n;
    //int sum=0;
    //int i=0;
    //while(i<=n){
    //    sum=sum+i;
    //    i=i+2;
//
//
    //}
    //cout<<sum<<endl;
    // this one is not for while loop
    int n,z,a,b;
    cout<< "to convert fahrenhiet to celcius press 1"<<endl;
    cout<< "to convert celcius to fahrenhiet press 2"<<endl;
    cin>>n;
    cout<< "input the value"<<endl;
    cin>>z;
    a=((z-32)*5/9);
    b=(z*9/5)+32;
    if (n==1){
        cout << "the conversion is "<<a<<endl;
    }
    else if (n==2){
        cout<<"the conversion is "<<b<<endl;
    }

}