#include<iostream>
using namespace std;
int main(){
    int n;
    //cin>>n;
    int i=1;
    /*for(;i<=n;i++){
        cout<<i<<endl;
    }*/


    //or

    /*for (;;){
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }i++;
    }   */
    // or 

    for(int a=1,b=2,c=3;a>=0 && b>=1&& c>=2;a--,b--,c--){
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
}