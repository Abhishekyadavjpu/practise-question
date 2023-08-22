#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int main(){
    int check[N];
    for(int i=0; i<N; i++){
        check[i]=-1;
    }
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //searchin smallest index that is repeating 
    for(int i=0; i<n; i++){
        if(check[arr[i]]==-1){
            check[arr[i]]=i;
        }
        else{
            cout<<"your repeating index is "<<check[arr[i]];
            return 0;
        }
    }

}