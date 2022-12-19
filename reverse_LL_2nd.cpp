
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



class Solution
{
    public:
   
    void reverse_Recursive(Node* &head,Node* curr,Node* pre){
     
     //base case;
     if(curr==NULL){
        head=pre;
        return;
     }
     Node* forword=curr->next;
     reverse_Recursive(head,forword,curr);
     curr->next=pre;
    }
    struct Node* reverseList(struct Node *head)
    {
        
        if(head==NULL || head->next==NULL){return head;}
        
        Node* pre=NULL;
        Node*curr=head;  
        reverse_Recursive(head,curr,pre);

        return head;
    }
    
};
    

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

int main()
{
    int T,n,l,firstdata;
    cout<<"Enter Test cases: ";
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cout<<"Enter No. of Nodes : ";
        cin>>n;
        
        cout<<"Enter elements : ";
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        cout<<"Reversed Linked List : ";
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}


// itterative solution 
//Tc : O(N);
