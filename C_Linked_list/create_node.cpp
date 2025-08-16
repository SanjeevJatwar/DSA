
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

int main(){
    vector<int> ar= {2,6,3,7,1};
    node* y = new node(ar[0]);
    cout<<y->link<<endl;
    cout<<y->data<<endl;
    return 0;
}
