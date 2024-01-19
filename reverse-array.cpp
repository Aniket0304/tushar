#include<iostream>
using namespace std;
void reverse(int arr[], int n ){
    int i=0;
    int end=1;
    for (;i<6;){
        swap(arr[i],arr[end]);
        i= i+2;
        end=end+2;
    }
}
void printarray(int arr[], int n ){
    for (int i=0; i<n; i++){
        cout<<arr[i]<< ' ';
    }
    cout << endl;

}

int main(){
int arr[6]={1,2,3,4,5,6};
reverse(arr, 6);
printarray(arr, 6);
}