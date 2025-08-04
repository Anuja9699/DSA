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
class mystack{
    public:
    node*head;
    mystack()
    {
        head=NULL;
    }
    void push(int val)
    {
        node*newnode=new node(val);
        if(head==NULL)
        {
           head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void pop()
    {
       node*temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;
    }
    int top()
    {
        return head->data;
    }


};
int main()
{
   mystack s1;
   s1.push(1);
   s1.push(2);
   s1.push(3);
   s1.pop();
   cout<<s1.top();

}