#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int bit=0;
    while(x!=0){
        int bit=x&1;
        cout<<bit;
        x=x>>1;
        
    }
    while(bit)
    
}