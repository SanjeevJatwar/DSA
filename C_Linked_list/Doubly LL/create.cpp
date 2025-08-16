#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    // Constructor with default parameters
    node(int val, node* next = nullptr, node* prev = nullptr) {
        this->data = val;
        this->next = next;
        this->prev = prev;
    }
};

// Function to print the linked list
void print(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    vector<int> r = {3, 5, 67, 34};

    // Create the head of the doubly linked list
    node* head = new node(r[0]);
    node* temp = head;

    // Create the rest of the linked list
    for (int i = 1; i < r.size(); i++) {
        node* newNode = new node(r[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = newNode;
    }

    // Print the list
    print(head);

    return 0;
}

