#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    bool sorted = false;                    // if already sorted (check)
    for(int i = 1; i < n; i++){             // No of rounds
        for(int j=0; j < n - i ; j++) {     // for iterating through array
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                sorted = true;
            }
        }
        if(sorted == false){
            break;
        }
    }
}

void print(int arr[], int n) {
    for(int i=0; i < n -1; i++ ) {
        cout<< arr[i] << " -> ";
    }
    cout << arr[n-1] <<endl;
}

int main(){
    int ar[5]= {3,13,1,4,9};
    bubble_sort(ar, 5);
    print(ar, 5);
    return 0;
}

// TC : worst : o(n^2) best : o(n)
// SC : O(1)