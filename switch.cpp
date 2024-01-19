#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    while (num==2){
        switch (num)
        {
        case 1:// yaha pe bhi output de skte ho 
            cout<<"this is the correct output"<< endl;
        //continue;
        case 2:// yaha pe bhi output de skte ho
        // yaha pe bhi ham switch ka ek case de skte hai. 
        cout<<"this the invalid output"<< endl;
        exit(num==2);// jaha laga doge wapas se waha loop nahi run nahi hoga 
    
        default:// yaha pe bhi output de skte ho 
        cout<<"why this output is printing "<<endl;
        break;
        
        }
       
    }
    
}