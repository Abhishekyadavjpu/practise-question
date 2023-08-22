#include<bits/stdc++.h>
using namespace std;
bool searchpair(int arr[],int n,int s){
             int low=0;
             int high=n-1;
             while(low!=high){
                int target=arr[low]+arr[high];
                if(target==s){
                    return 1;
                }
                else if(target>s){
                    low++;
                }
                else{
                    high++;
                }
            
             }
             return 0;
}

int  main(){
    int arr[]={-1,4,7,2};
    int n=4;
   // int maxsum=0;
    //possible subarray
  //  for(int i=0; i<n; i++){
   //     for(int j=i; j<n; j++){
     //       int sum=0;
       //     for(int k=i; k<=j; k++){
         //      // cout<<arr[k]<<" ";
           //    sum=sum+arr[k];
            //}
              //maxsum=max(maxsum,sum);
           // cout<<endl;
       // }
 //   }
//    cout<<"your maximum subarray sum"<<maxsum;

//kadane algorithm
 //int sum=0; 
//int maxsum=0;
//for(int i=0; i<n; i++){
 //   sum=sum+arr[i];
 //   if(sum<0){
  //      sum=0;
  //  }
 //   maxsum=max(maxsum,sum);
//}
//cout<<maxsum<<endl;
//}
//pair sum exist or not
 int a[]={23,45,56,78};
 int s=104;
 cout<<searchpair(a,n,s);

}