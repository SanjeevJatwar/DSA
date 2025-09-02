#include<bits/stdc++.h>
#include<queue>
using namespace std;

int size = 5;

class Stack{
public:
    queue<int> q1;
    queue<int> q2;
public: 
void push(int val){
    int q1.push(val);
}    

void pop(){
    
    q2.push(q1.top)
    q1.pop();
    cout<<q2.top<<" is popped."<<'\n';
}

void display(){
    for(int i=0;i<q2.top;i++){
        cout<<q2[i]<<" -> ";
    }
    cout<<"ho gya";
}
};
int main(){

    return 0;
}