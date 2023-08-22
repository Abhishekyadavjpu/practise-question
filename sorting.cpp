#include<bits/stdc++.h>
using namespace std;
int main(){


//using while loop  insertion sorting
int arr[]={23,44,10,-12,23};
int size=5;
for(int i=1; i<size; i++){
    int count=arr[i];
    int freeq=i-1;
    while(freeq>=0 && count<arr[freeq]){
          arr[freeq+1]=arr[freeq];
          arr[freeq]=count;
          freeq--;
    }

}
for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}


}