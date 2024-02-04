#include <iostream>
#include <array> //stl ke liye library import kiya hai 

using namespace std;
int main(){
    array <int , 4> a = {1,2,3,4};// ye stl ka main implimentation code hai.
    int size = a.size();
    for (int i =0;i<size;i++){
        cout << a[i] <<" ";
    }
}