#include<iostream>
using namespace std;
int main(){
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"@";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    int n;
    cin>>n;
    int i=1;
    //while(i<=n){
    //    int j=1;
    //    int value=i;
    //    while (j<=i){
    //        cout<<value<<" ";
    //        value=value+1;
    //        j=j+1;
    //    }
    //    cout<<endl;
    //    i=i+1;
    //}
    //while(i<=n){
    //    int j=1;
    //    while(j<=n){
    //        cout<<count<<" ";
    //        count=count+1;
    //        j=j+1;
    //    }
    //    cout<<endl;
    //    i=i+1;
//
    //}
    /*while(i<=n){
        int j=1;
        while (j<=i){
            cout<<i-j+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    while (i<=n){
        int j =1;
        while (j<=n){
            char ch = 'A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    while (i<=n){
        int j =1;
        while (j<=n){
            char ch = 'A'+j-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    
    int ch=65;
    /*while (i<=n){
        int j=1;
        while (j<=n){
            cout<<char(ch);
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }*/
    /*while (i<=n){
        int j=1;
        while(j<=i){
            char ch=('A'+i-1);
            cout<<char(ch);
            j=j+1;

        }
        cout<<endl;
        
        i=i+1;
    }*/
    while (i<=n){
        int j=1;
        
        while (j<=i){
            char ch=('A'+(n-i+j-1));
            cout<<ch;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
    

}