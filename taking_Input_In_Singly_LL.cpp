#include<bits/stdc++.h>
using namespace std;

// creating template 
template<typename T>


class Node{
  public:
  T data;
  Node* next;

// constructor 
  Node(T val){
    this->data=val;
    this->next=NULL;
  }

};

// taking input function  from user 
Node<char>* take_Input(){
Node<char> * head= NULL;
Node<char> * tail= NULL;

char val;
cin>>val;

while(val!='x'){
Node<char> *newNode = new Node<char>(val);
if(head==NULL){
    head=newNode;
    tail=newNode;
}else{
    tail->next=newNode;
    tail=newNode;
}
cin>>val;
}
return head;
}

//display your desired linked List

void display(Node<char>*head){
while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<"NULL";
}


int main(){

cout<<"Enter Your Linked List (click on (x) if you want to terminate) : "<<endl;
Node<char>* head= take_Input();
display(head);

}