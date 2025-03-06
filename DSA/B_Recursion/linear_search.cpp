#include<bits/stdc++.h>
using namespace std;
bool linear_search(int arr[],int size, int k){
    if(size ==0){return false;}
    if( arr[0] == k){return true;}
    else{
        return linear_search(arr+1,size-1,k); 
    }
}
int main(){
    int arr[4]={1,2,3,4};
    cout<<linear_search(arr,4,0);
    return 0;
} 