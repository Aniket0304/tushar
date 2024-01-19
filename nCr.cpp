#include<iostream>
using namespace std;

int nCr(){
    int n,r;
    cin>>n >> r ;
    int i=n;
    int ans=1;
    for (i;i>=1;i--){
      ans=ans*i;
    }
    int answ=1;
    int j=r;
    for(j;j>=1;j--){
        answ=answ*j;
    }
    int an=1;
    int d=n-r;
    for(d;d>=1;d--){
        an=an*d;
    }
    int a=ans/(answ*an);
    return a;
}

int main(){
    
    cout<< "the answer is "<< nCr() <<endl;
    cout<< "the answer is "<< nCr() <<endl;

}