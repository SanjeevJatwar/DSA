#include<bits/stdc++.h>
using namespace std;

void reverse(string& s,int i){
    int n = s.length();
    int j= n-i-1; // It is traversing from last.
    if(i > j) {
        return ;
    }
    swap(s.at(i), s.at(j));
    i++;
    j--;
    reverse(s,i);   
}

int main(){
    string s = "HHH";
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string o =s;
    cout<<"reverse of "<<o<<" is ";
    reverse(s,0);
    cout<<s<<endl;;
    if(o == s){cout<<"IT IS A PALINDROME"<<endl;}
    else{cout<<"NOT A PALINDROME"<<endl;}
    return 0;
}