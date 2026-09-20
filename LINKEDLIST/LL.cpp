#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    public: // another constructor with only one parameter
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
int main(){
    vector<int>arr = {2,5,6,7,8};
    Node* y = new Node(arr[0],nullptr);
    cout<<y; // prints the address as 0x22541c21780
    cout<<y->data; // prints 2
    cout<<y->next; // prints the address of the next node or nullptr 0x0
};