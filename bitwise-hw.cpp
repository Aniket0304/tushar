#include<iostream>
using namespace std;
int main(){
    
    //Part1
    
    /*int a,b=1;
    a=10;
    if(++a){
        cout<<b<<endl;
    }
    else{
        cout<<++b<<endl;
    }*/

    //Part 2
    
    /*int a=1;
    int b=2;
    
    if (a-- >0 && ++b>2){
        cout<<"stage1-insideif ";
    }else{
        cout<<"stage2-insidelse";
    }
    cout<<a<<' '<<b<<endl;*/
    
    // Part3

    int a=1;
    int b=2;

    if(a-->0 || ++b>2){ //in this line after verifying the value of "a" it didnot move forward so ++b is not executed since b remains 2
        cout<<"stage1-inside-if ";
    }else{
        cout<<"stage2-inside-else ";
    }
    cout<<a<<' '<<b<<endl;

    //Part4

    /*int number=3;
    cout<<(25*(++number))<<endl;*/

    //Part 

   /* int a=1;
    int b=a++;
    int c=++a;
    cout<<b<<endl;
    cout<<c;*/

}