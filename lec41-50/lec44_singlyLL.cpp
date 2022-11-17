#include<iostream>
using namespace std;

class Node{

public: 
  int data;
  Node* next;

  //constructor 
  Node(int data){
    this->data = data;
    this->next = NULL;
  }

  //destructor
  ~Node(){
    int value = this->data;
    //memory free
    if(this->next != NULL){
      delete next;
      this->next = NULL;
    }
    cout<< "memory is free for node with data " << value << endl;
  }
};

void insertAtHead(Node* &head, int d){ 
  //create new node 
  Node* temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int d){
  //create new node
  Node* temp = new Node(d);
  tail->next  = temp;
  tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d){
  //insert at 1
  if(position==1){
    insertAtHead(head, d);
    return;
  }
  

  Node* temp = head;
  int cnt = 1;
  while(cnt<position-1){
    temp = temp->next;
    cnt++;
  }

  // inserting at last positon
  if (temp->next == NULL){
    insertAtTail(tail, d);
    return;
  }

  //creating a node for d
  Node* nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

//traverse a linked list
void print(Node* &head){
  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }cout << endl;
}

void deleteNode(int position, Node* &head){
  //delete first node
  if(position==1){
    Node* temp = head;
    head = head->next;

    //memory free start node
    temp->next = NULL;
    delete temp;
  }else{
    //deleting any middle or last node;
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt<position){
      prev = curr;
      curr = curr->next;
      cnt ++;
    }
    prev->next = curr->next;
    curr ->next = NULL;
    delete curr; 
  }
}
void deleteKey(Node* &head, int key){
  Node* temp = head;
  while(temp->next->data != key){
    temp = temp->next;
  }
  Node* toDelete = temp-> next;
  temp->next =temp->next->next;
  delete toDelete;
}

int main(){
  Node* node1 = new Node(10);
  cout << node1->data << endl;
  cout << node1->next << endl;

  Node* head = node1;
  Node *tail = node1;
//Insert in starting
  print(head);
  insertAtHead(head, 12);
  print(head);
  insertAtHead(head, 15);
  print(head);

  cout << endl << endl;

//insert at position
  insertAtPosition(tail,head, 3, 22);

//Insert at ending
  insertAtTail(tail, 1);
  print(head);
  insertAtTail(tail, 2);
  print(head);
  
// insert at position
  insertAtPosition(tail, head, 7, 20);
  insertAtTail(tail, 5);
  print(head);

//deleting nodes
  //deleteNode(8, head);
  //print(head); 

//deleting node with a key
  deleteKey(head, 10);
  print(head);
}