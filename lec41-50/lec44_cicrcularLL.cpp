#include<iostream>
using namespace std;

/*Notes
  Similar to singly linked list, difference lies that
  last node points to the first node
  doubly linked list can be circular too
*/

class Node{
  public: 
  int data;
  Node* next;

  //constructor
  Node(int d){
    this->data = d;
    this->next = NULL;
  }

  ~Node(){
    int value = this->data;
    //memory free 
    if(this->next != NULL){
      delete next;
      this->next = NULL;
    }
    cout << "Memory is free for node with data " << value << endl;
  }
};

void insertNode(Node* &tail,int element, int d){

  //empty list
  if(tail==NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode -> next = newNode;
  }
  else{
    // non empty list
    //  assuming that the element is preseent in the list

    Node* curr = tail;
    while(curr->data != element){
      curr = curr->next;
    }

    //element found -> curr is representing element wala node
    Node* temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp; 
  }
}

void print(Node* tail){
  Node* temp = tail;
  if(tail==NULL){
    cout << "Tail is empty ";
  }
  do {
    cout << tail->data << " ";
    tail = tail->next;
    
  }while(tail != temp);
  cout << endl;
}

void deleteNode(Node* &tail, int value){
  //empty list
  if(tail == NULL){
    cout << "List is empty" << endl;
    return;
  }
  else{
    //non-empty
    //assuming that 'value; is present in the LL
    Node* prev = tail;
    Node* curr = prev->next;

    while(curr->data != value){
      prev= curr;
      curr = curr->next;
    }

    prev->next = curr->next;

    //one node linked list
    if(curr ==prev){
      tail = prev;
    }

    if(tail==curr){
      tail=prev; 
    }
    curr -> next = NULL;
    delete curr;
  }
}

int main(){
  Node* tail = NULL;

  //empty list me insert
  insertNode(tail, 5, 3);
  print(tail);
  insertNode(tail, 3,5);
  print(tail);
  /*insertNode(tail, 5,7);
  print(tail);
  insertNode(tail, 7,9);
  print(tail);
  insertNode(tail, 9,10);
  print(tail); */

  deleteNode(tail, 5);
  print(tail);
}  