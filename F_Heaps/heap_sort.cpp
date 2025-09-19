#include <bits/stdc++.h>
using namespace std;

int arr[10];
int s =0;

class heap{
public:
void insert(int val){
    s +=1;
    int i = s;
    arr[i] = val;

    while(i >1){
        int p = i/2;
        if(arr[p]< arr[i]){
            swap(arr[p],arr[i]);
            i = p; 
        }
        else return;
    }
}


};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     // Your code here

    return 0;
}
