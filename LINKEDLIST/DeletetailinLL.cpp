#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

Node* convertArray2LL(vector<int> arr){

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

Node* removeTail(Node* head){

    if(head == nullptr){
        return nullptr;
    }

    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    Node* temp = head;

    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}

void print(Node* head){

    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){

    vector<int> arr = {2,4,5,8};

    Node* head = convertArray2LL(arr);

    head = removeTail(head);

    print(head);
}