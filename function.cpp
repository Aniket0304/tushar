#include<iostream>
using namespace std;

int power (){
    int a,b;
    cin>> a>> b;
    int ans=1;
    for(int i=1; i<=b; i++){
        ans =ans*a;
    }
    cout<< ans <<endl;
    return ans; 
}

bool isEven(){   // one of the example of verifying a number is odd without using modulus. Ye sirf true value pe chalega. 
    int a;
    cin>>a;
    if(a&1){/*here it is doing comapring the giving value
    and its last digit with 1 using and operator so if the last value
    is 1 then number is odd else the number is true.*/
        return 0;
    }
    else{
        return 1;
    }
    
}


int main(){
    if (isEven()){// yaha pe is true ka mtlb hai ki value true hai. 
        cout<<"number is even"<< endl;
        
    }
    else{
        cout<< "number is odd" << endl;
    }
    
    
    //cout<<"answer is "<< power()<< endl;
    //cout<<"answer is "<< power()<< endl;
}