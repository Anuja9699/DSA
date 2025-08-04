#include<iostream>
using namespace std;
#include<queue>
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
    bool empty()
    {
        return head==NULL;
    }
    void push(int val)
    {
        node*newnode=new node(val);
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }

    }
    void pop()
    {
        if(empty())
        {
            return;
        }
        node*temp=head;
        head=head->next;
        delete temp;
    }
    int  front()
    {
        if(empty())
    {
        return -1;
    }
    return head->data;
    }

};

int main()
{
  list l1;
  l1.push(1);
  l1.push(2);
  l1.push(3);
  l1.pop();
  cout<<l1.front();

}