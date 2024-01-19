#include <iostream>
using namespace std;
int array(int hello[], int n){
for(int i=0;i<n;i++){
    cout<<hello[i]<<' ';

}
}
int main(){
    int big[14]={2,3,4,5,6,7,8,9};
    array(big, 9 );
}
