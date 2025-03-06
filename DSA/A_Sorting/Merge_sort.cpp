#include<bits/stdc++.h>
using namespace std;

void Merge(int *ans, int s,int e){
    int mid = (s+e)/2;
    int len1 = mid - s +1
}

void merge_sort(int *arr, int s, int e){
    if(s>=e){return;}
    int mid = s + (s+e)/2;
    merge_sort(arr,s, mid);
    merge_sort(mid+1,e);
    Merge(ans, s,e);
}
int main(){

    int t;
    cin >> t;
    while(t--){
        // Your code here
    }
    return 0;
}