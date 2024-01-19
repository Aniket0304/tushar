#include<iostream>
using namespace std;
int main(){
    //int n;
    //cin>>n;
    //int i=1;
    //int sum =0;
    //while (i<=n){
    //    
    //    sum=sum+i;
    //    i=i+1;
    //    
    //    
    //}
    //cout<<"the sum of consecutive number till "<<n<<" is "<<sum<<endl;

    int n;
    cin>>n;
    int i=2;
    while (i<n){
        if (n%i==0){
            cout<<"the number is not prime "<<i<<endl;
        }
        else{
            cout<<"the number is prime "<<i<<endl;
        }
        
        i=i+1;

    }




}