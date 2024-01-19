#include<iostream>
using namespace std;
int getmax(int num[], int n){
    int maxi= INT8_MIN;// sabse lowest value decide ho rahi hai. 
    for (int i=0;i<n;i++){

        maxi=max(maxi,num[i]);// ye pura if wala statement iss me hi cover ho gaya. 


       /* if (num[i]> max){         // confusion ye tha ki agar beech me maximum value aayegi tab toh loop 
                                    // terminate ho jaayega lekin aisa hoga nahi 
                                    // wo apna value hi nahi change karega aur poora check kar ke aayega. 
            max=num[i];
        }*/
    }
    return maxi;

}

int getmin(int num[], int n){
    int min= INT8_MAX;
    for (int i=0;i<n;i++){
        if (num[i]< min){
            min=num[i];
        }
    }
    return min;

}

int main(){
    int size; 
    cin >> size;
    int tot[1000];
    for(int i=0; i<size;i++){
        cin>>tot[i];
    }
    cout<<getmax(tot,size)<<endl;
    cout<<getmin(tot,size)<<endl;
}