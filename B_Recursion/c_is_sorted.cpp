#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int arr[],int size){
    if(size == 1|| size ==0){return true;}
    if(arr[0] > arr[1]){return false;}
    else{
        return is_sorted(arr+1,size-1); //
         
    }
}
int main(){
    int arr[4]={1,2,3,4};
    cout<<is_sorted(arr,4);
    return 0;
}