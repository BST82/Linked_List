  if(head==NULL || head->next==NULL){return head;}

      Node* pre=NULL;
      Node* curr=head;
      Node* forword=NULL;

      while(curr!=NULL){
       forword=curr->next;
       curr->next=pre;
       pre=curr;
       curr=forword;
      }
      return pre;