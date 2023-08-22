#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,0,7,2,0,2,2};
    int n=8;
    int maxno=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>maxno && arr[i]>arr[i+1]){
            cout<<"record breaker day"<<arr[i]<<endl;

        } 
        maxno=max(maxno,arr[i]);
    }
}