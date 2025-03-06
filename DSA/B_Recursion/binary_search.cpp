#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[],int size,int k){
    if(size ==0){return false;}
    if(arr[1]== k){return true;}
    if(arr[size/2]  > k) { 
        return binary_search(arr,size/2,k);}
    else{
            size = size/2+1;
            return binary_search(arr, size/2, k);
        }
    }


int main(){
    int arr[4]={1,2,3,4};
    cout<<binary_search(arr,4,0);
    return 0;
}