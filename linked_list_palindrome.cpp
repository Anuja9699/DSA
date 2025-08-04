#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
class list{
    public:
    node*head;
    node*tail;
    list()
    {
        head=NULL;
        tail=NULL;

    }
    node* reverse(node*head){
        node*prev=NULL;
        node*curr=head;
        while(curr!=NULL){
        node*next=curr->next;
        curr->next=prev;
         prev=curr;
        curr=next;
       
        }
        return prev;
    }
        bool palindrome()
        {
            if(head==NULL)
            {
                return true;
            }
            node*fast=head;
            node*slow=head;
            while(fast!=NULL&&fast->next!=NULL)
            {
                fast=fast->next->next;
                slow=slow->next;
            }
           node*secondhalf= reverse(slow->next);
           node*firsthalf=head;
           node*temp=secondhalf;
           while(temp!=NULL)
           {
            if(firsthalf->data!=temp->data)
            {
                return false;
            }
            firsthalf=firsthalf->next;
            temp=temp->next;

           }
       return true;
        }
        
    };
        



    
      

