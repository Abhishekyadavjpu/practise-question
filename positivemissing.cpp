#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,-9,1,2,-5,5};
    int n=6;
    int previdx=-1;
    for(int i=0; i<n; i++){
      
      if(arr[i]>=0 &&  arr[i]==previdx+1){
        previdx=arr[i];
      }
      else if(arr[i]<0){
        continue;
      }
        else{
            cout<<"your positive value is missing:"<<previdx+1;
                break;
        }
      }



    }
