#include <iostream>
using namespace std;
int sum(int arr[], int n){
    int a = 0; 
    int c;
for (int i=0;i<n;i++){
    int c = a+arr[i];
    a = c ;
}
return a; 
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum of the given array is "<<endl<< sum(arr , n)<<' ';

}