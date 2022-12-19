
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
   
    Node* reverse_Recursive(Node* &head){
     
     //base case;
     if(head==NULL || head->next==NULL){
        return head;
     }
     Node* smallhead= reverse_Recursive(head->next);
     head->next->next=head;
     head->next=NULL;
    
    return smallhead;
    }


    struct Node* reverseList(struct Node *head)
    {

        return reverse_Recursive(head);
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
