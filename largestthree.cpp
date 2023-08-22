#include<bits/stdc++.h>
using namespace std;
int  threelargest(int arr[],int n){
    int maxno=INT_MIN;
    int smaxno=INT_MIN;
    int ssmaxno=INT_MIN;
    int ans=0;
    for(int i=0; i<n; i++){
        if(arr[i]>maxno){
            ssmaxno=smaxno;
            smaxno=maxno;
            maxno=arr[i];
        }
        else if(arr[i]>smaxno && arr[i]!=maxno){
            ssmaxno=smaxno;
            smaxno=arr[i];
        }
        else if(arr[i]>ssmaxno && arr[i]!=smaxno && arr[i]!=maxno){
            ssmaxno=arr[i];
        }
    }
   ans= maxno+smaxno+ssmaxno;
    return ans;
}
int main(){
    int arr[]={1,2,-1,2,1};
    int n=5;
    cout<<threelargest(arr,n);
}