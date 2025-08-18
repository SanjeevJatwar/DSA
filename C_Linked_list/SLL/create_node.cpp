
#include<bits/stdc++.h>
using namespace std;

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
void print(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->link;
    }
    cout << "NULL" << endl;
}

int main(){
    vector<int> ar= {2,6,3,7,1};
    node* head = new node(ar[0]);
    node* temp = head;
        for (int i = 1; i < ar.size(); i++) {
        node* newNode = new node(ar[i]);
        temp->link = newNode;
        temp = newNode;
    }
    print(head);
    return 0;
}
