#include <bits/stdc++.h>
using namespace std;

int top = -1;
const int size = 5;
int ar[size]; 
class Stack{
public:

void push(int val){
    if(top == size-1){
        cout<<"OVERFLOW"<<endl;
    }
    // int val;cin>>val;
    ar[++top] = val;
    cout<<val<<" at "<<top<<'\n';
}

void pop(){
    if(top == -1){cout<<"UNDERFLOW"<<endl;}
    else{
    int del = ar[top];
    top--;
    cout<<del<<" is deleted at pos "<<top+1;
}}

void display(){
    for(int i=0;i<=top;i++){cout<<ar[i]<<" -> ";}
}

};

int main() {

    Stack s;
    int choice, val;

    while (true) {
        cout << "\n1. Push  2. Pop  3. Display  4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value to push: ";
            cin >> val;
            s.push(val);
        }
        else if (choice == 2) {
            s.pop();
        }
        else if (choice == 3) {
            s.display();
        }
        else if (choice == 4) {
            break;}
        else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}