#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
    int start=0;
    int end=n-1;
    int ans[n];
    int i=0;
    while(start<n-1){
      ans[start]=arr[end];
      ans[start+1]=arr[i];
      i++;
      start+=2;
      end--;
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    rearrange(arr,n);
   
   
}