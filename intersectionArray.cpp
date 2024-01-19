#include<iostream>
using namespace std;

void findDuplicate(int arr[],int brr[], int n){
    bool a=false;
    for(int i=0; i<n;i++){

        for(int j= 0; j<n;j++){

            if(arr[i]==brr[j]){
                int count = arr[i];
                cout<<count<<' ';
                a=true ;
            }     
                
        }
        
    }
    if (a==false){
            cout<<-1;
        }
}


// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++)
// }


int main() {
    int arr[5]={8,7,6,9,10};
    int brr[5]={1,2,3,4,5};
    findDuplicate(arr,brr,5);
    //printArray(arr,6);
    
}
// #include <iostream>
// using namespace std;
// void findIntersection(const int arr1[], int n, const int arr2[], int m) {
//     bool foundIntersection = false;
//     // bool ki value loop ke bahar change ho jaati hai isliye yaha loop ka sahara liya gaya hai. 

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (arr1[i] == arr2[j]) {
//                 // Common element found
//                 if (!foundIntersection) {
//                     cout << "Intersection: ";
//                     foundIntersection = true;
//                 }
//                 cout << arr1[i] << " ";
//                 break;  // Move to the next element in the outer loop
//             }
//         }
//     }

//     if (!foundIntersection) {
//         cout << "-1" <<endl;
//     }
// }

// int main() {
//     // Example arrays
//     int array1[5] = {1, 2, 3, 4, 5};
//     //int size1 = sizeof(array1) / sizeof(array1[0]);

//     int array2[5] = {5, 8, 9, 10, 7};
//     //int size2 = sizeof(array2) / sizeof(array2[0]);

//     // Find the intersection
//     findIntersection(array1, 5, array2, 5);

//     return 0;
// }
