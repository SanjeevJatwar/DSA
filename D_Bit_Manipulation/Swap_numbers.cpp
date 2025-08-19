#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 10;
    int b = 20;
    a = a^b;
    b = a^b; // (a^b)^b
    a = b^a;
    cout<<"a = "<<a<<" "<<'\n'<<"b = "<<b<<endl;
    return 0;
}
