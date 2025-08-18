#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* link;
public:
    node(int val, node*next){
        data = val;
        link = next;
    }
    // contructor 
    node(int val){
        this->data = val;
        this->link = nullptr;
    }
};
void traversal(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->link;
    }
    cout << "NULL" << endl;
}

bool search(node* head,int val) {
    node* temp = head;
    while (temp!=nullptr) {
        if (temp->data==val)  // present
            return true;
        temp = temp->link;
    }
    return false; // absent
}

int main() {
    node* n1 = new node(10);
    node* n2 = new node(20);
    node* n3 = new node(30);

    n1->link = n2;
    n2->link = n3;

    traversal(n1);

    cout << (search(n1, 20) ? "Found" : "Not Found") << endl;
    cout << (search(n1, 40) ? "Found" : "Not Found") << endl;

    return 0;
}
