#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=3;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<(~a)<<endl;
    cout<<"a^b "<<(a^b)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19>>1)<<endl;
    cout<<(8<<1)<<endl;


    int i=7;

    cout<<(++i)<<endl;
    //8 i=8
    cout<<(i++)<<endl;
    //8 i=9
    cout<<(--i)<<endl;
    //8 i=8
    cout<<(i--)<<endl;
    //8 i=7
    cout<<i<<endl;

}
