#include<iostream>
using namespace std;
int main(){
    //int a=9;
    //if(a==9){
    //    cout<<"nine"<<endl;
    //}
    //else if (a>0){
    //    cout<<"positive"<<endl;
    //}
    //else{
    //    cout<<"the given number is negative"<<endl;
    //}
    //output=nine


    //int a= 2;
    //int b=a+1;
//
    //if ((a=3)==b){
    //    cout<<a<<endl;
//
    //}
    //else{
    //    cout<<a+1<<endl;
    //}
    //output=3
    char ch;
    cin>>ch;
    if (ch>96&&ch<123){
        cout<<"the is lowercase"<<endl;
        
    }
    else if(ch>64&&ch<91){
        cout<<"this is uppercase"<<endl;

    }
    else if (ch>47&&ch<58){
        cout<<"this is number"<<endl;
    }
    else{
        cout<<ch<<" the following is a symbol"<<endl;
    }
}