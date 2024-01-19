/*1. array will have similar type of items, can't have all of them in same array.
2. continuously storage.
3. can store multiple value in single variable. 
4. can access through indexing. */
#include<iostream>
using namespace std;
int main(){
    //declare
    int number[15];

    //cout<<number[6]<<endl;

    int array[3]={2,3,4};

    //cout<<array[1]<<endl;

    //int array2[15]={2,7};
    //int n=3;
    //
    //for (int i=0; i<n;i++){
    //    cout<<array2[i]<<' ';
    //}
    

    cout<<endl<<"Everything is fine "<<endl;

    int fifth[10]={1};// if you'll just put the 1 it will read the other value as 0. 
    int n=10;
    for (int i=0; i<n;i++){
        cout<<fifth[i]<<' ';
    }


    return 0;

}
