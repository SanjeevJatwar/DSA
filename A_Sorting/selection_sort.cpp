#include<bits/stdc++.h>
using namespace std;

void selec_sort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int min_index = i;
        for( int j=i+1; j<n-1; j++) {
           if( arr[j] < arr[min_index]){
            min_index = j;
           }}
           swap(arr[min_index], arr[i]);
            }
        }

void print(int arr[], int n) {
    for(int i=0; i < n -1; i++ ) {
        cout<< arr[i] << " -> ";
    }
    cout << arr[n-1] <<endl;
}


int main(){
    int ar[5]= {3,3,1,4,9};
    selec_sort(ar, 5);
    print(ar, 5);
    return 0;
}

// TC : O(n^2)
// SC : O(1)