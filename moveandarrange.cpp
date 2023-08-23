#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void rearrange(int arr[],int n){
    for(int i=0; i<n-1; i+=2){
           if(arr[i]>arr[i+1]){
             swap(&arr[i],&arr[i+1]);
           }
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
 rearrange(arr,n);
 for(int i=0; i<n; i++){
    cout<<arr[i]<<" "<<endl;
 }

}