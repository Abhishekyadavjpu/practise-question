#include<bits/stdc++.h>
using namespace std;
void oddevenpartation(int arr[],int n){
    int ans[n];
    int start=0;
    int end=n-1;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            ans[start]=arr[i];
            start++;
        }
        else{
            ans[end]=arr[i];
            end--;
        }
    }
    for(int i=0; i<start; i++){
        arr[i]=ans[i];
    }
    int k=start;
    for(int j=n-1;  j>end; j--){
        arr[k]=ans[j];
        k++;
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={12,34,45,9,8,90,3};
    int n=7;
    oddevenpartation(arr,n);
}