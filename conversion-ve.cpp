#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=~(-n)+1;
    int w=sizeof(ans)*2;
    int val=0;
    while(w!=0){
        val=ans&1;
        cout<<val;
        w--;
    }
    
    while (val!=0){
        cout<<val%10;
        val=val/10;
    }
}
    
    
    



    
    
    
        
            
        
        


        
        

    
        
        
    

    
    


    
    
