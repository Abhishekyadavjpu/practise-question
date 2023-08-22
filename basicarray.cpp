
 #include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[]={12,31,66,78,90,99};
   int key=78;
   //binary search is applied and this is 
   int start=0;
   int end=sizeof(arr)/sizeof(arr[0]);
   while(start<=end){
             int mid=(start+end)/2;
             if(arr[mid]==key){
                cout<<"your key value is at"<<mid;
                return 0;
                
             }
             else if(arr[mid]<key){
                start=mid;
             }
             else if(arr[mid]>key){
                end=mid;
             }
   }



}