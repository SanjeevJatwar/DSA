#include <bits/stdc++.h>
#include<queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
// MAX HEAP IS DEFAULT
    priority_queue<int> pr;  
    pr.push(5);
    pr.push(8);
    pr.push(10);
    cout<<pr.top()<<" is highest element."<<endl;


// MIN HEAP 
    priority_queue<int , vector<int>, greater<int>> minheap;
    minheap.push(10);
    minheap.push(5);
    minheap.push(8);
    cout<<minheap.top()<<" is the minimum element.";
    return 0;
}
