#include<iostream>
using namespace std;
int main(){
    int add=0;
    int answ=110;
    int s;
   while (answ!=0){
        if (answ%10==0){
            answ=1;
        }
        else{
            s=answ%10;
        }
        
        answ=answ/10;
        add=add+s;
    }
    cout<<add<<endl;
}
   