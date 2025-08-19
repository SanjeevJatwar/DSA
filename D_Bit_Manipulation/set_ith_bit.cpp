#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n =13 , i =2;
    if(n | (1<<i)){cout<<"ok"<<'\n';}
    n = n|(1<<i);
    cout<<bitset<4>(n)<<'\n';
    return 0;
}
