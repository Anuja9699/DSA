#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    public:
    node(int val)
    {
        data=val;
        next=NULL;
    }

};
class list
{

  node*head;
  node*tail;
  list()
  {
    head=NULL;
    tail=NULL;
  }
  bool cycle()
  {
    node*fast=head;
    node*slow=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
  }
};

