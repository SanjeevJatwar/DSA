#include <bits/stdc++.h>
using namespace std;

const int size = 5;
int top = -1;


class Node {
public:
    int data;
    Node* link;
    Node(int val) {
        data = val;
        link = nullptr;
    }
};

class Stack{
    Node* top; // pointer to top of stack
public:
    Stack() { top = nullptr; }
    void push(int val) {
        Node* temp = new Node(val);
        temp->link = top; // new node points to old top
        top = temp;       // update top
        cout << val << " pushed\n";
    }

    void pop(){
        if(top == NULL){cout<<"UNDERFLOW"<<endl;
        return;}
        Node* temp = top;
        delete temp;
    }

    void Display(){
        Node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp = temp->link;
}    }

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
            s.Display();
        }
        else if (choice == 4) {
            break;}
        else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}