#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){ // adding constructor to avoid the nullptr in the assigning of head
        data = data1;
        next = nullptr;
    }
};
// we cannot retun the entire Linked list so we are returning the head
Node* convertArray2LL(vector<int>arr){
      Node* head = new Node(arr[0]);// made constructor or else it will be arr[0], nullptr)
      Node* mover = head;
      for(int i =1;i<arr.size();i++){
          Node* temp = new Node(arr[i]);
          mover->next = temp;
          mover = mover->next;
          // or mover = temp// both are same
      } 
      return head;

}
int main(){
    vector<int>arr = {2,4,5,8};
    Node* head = convertArray2LL(arr);
    cout<<head->data; // prints 2   
    // Traversal code
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}