#include<bits/stdc++.h>
using namespace std;

// NOT OPTIMISED DUE TO MULTIPLE SWAPS
void insertion_sort(int arr[], int n) {
    for (int i=1; i< n ; i++) {
        for(int j=i; j>0; j--) {
            if(arr[j-1] > arr[j]) {
                swap(arr[j], arr[j-1]);
            }
        }
    }
}


// optimized

void optimal_insertion_sort(int arr[], int n) {
    for (int i=1; i< n ; i++) {
        int key = arr[i];
        int j= i-1;
        while(arr[j-1] > key && j>=0) {
            arr[j+1] = arr[j];
                j--;
            }
            arr[j +1] = key; 
        }
    }
//Aspect:	Your Code	Optimized Code
//Swapping:	Swaps elements repeatedly.	Avoids swaps by shifting elements.
//Key Variable:	Does not use a key variable.	Uses key to store the current element.
//Inner Loop Logic :	Swaps every time a condition is met.	Shifts elements and inserts the key once.
//Performance:	Inefficient due to repeated swaps.	Efficient due to reduced assignments.


void print(int arr[], int n) {
    for(int i=0; i < n -1; i++ ) {
        cout<< arr[i] << " -> ";
    }
    cout << arr[n-1] <<endl;
}


int main(){
    int ar[5]= {3,3,1,4,9};
    optimal_insertion_sort(ar, 5);
    print(ar, 5);
    return 0;
}
