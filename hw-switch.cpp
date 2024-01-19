#include<iostream>
using namespace std;
int main(){
    int x=1330;
    int n,m,l,o;
    cin>>n;
    cin>>m;
    cin>>l;
    cin>>o;
    switch(n){
        case 100 : cout<< x/100 << endl;
        x=x%100;
        //break;
    }
    switch(m){
        case 50: cout<< x/50<<endl;
        //x=x%50;
        //break;
    }
    switch(l){
        case 20: cout<< x/20<<endl;
        x=x%20;
        //break;
    }
    switch(o){
        case 1: cout<< x <<endl;
        //break;
    }
        

        
    
}