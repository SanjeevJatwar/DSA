#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* link;

    node(int val, node*next){
        data = val;
        link  = next;
    }

    node(int val){
        this->data = val;
        this-> link = nullptr;
    }
};
int main(){
    vector<int> a= {2,4,5,1,9};
    node * head = new node(a[0]);
    node* link = head; 
    
    for(int i=0 ; i<a.size(); i++){
        node* temp = new node(a[i]);
        link -> link = temp;
        head  = temp;
        cout<<temp -> data<<" -> ";
    }
    return 0;
}