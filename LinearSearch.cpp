#include <iostream>
using namespace std;

bool search(int arr[] , int n , int key ){
    int i=0;
while (i < n ){
    if (arr[i]==key){
        return 1;
    }
    i++;
}
return 0;
}


int main(){
    int key;
    cin>>key;
    int arr[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9,-22};
    bool found = search(arr, 10 , key );
    if (found ){
        cout<< "key is found "<< endl;
    }
    else{
        cout<< "key not found "<<endl;
    }

}