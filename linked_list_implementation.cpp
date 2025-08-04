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
        public:
        list()
        {
        head=NULL;
        tail=NULL;
        }
        void push_front(int val)
        {
            node*newnode=new node(val);
            if(head==NULL)
            {
                head=tail=newnode;
            }
            else{
                newnode->next=head;
                head=newnode;
            }
        }
        void push_back(int val)
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
         void print()
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    }
    void insert_at_position(int val,int pos)
    {
        node*newnode=new node(val);
        node*temp=head;
        for(int i=0;i<pos-1;i++)
        {
          temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;

    }
    void delete_ll()
    {
       if(head!=NULL)
       {
        delete head;
        head=NULL;
       }
    }
    void pop_front()
    {
        node*temp=head;
        head=head->next;
        delete temp;
    }
    void pop_back()
    {
        node*temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    int search(int key)
    {
        node*temp=head;
        int idx=0;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return idx;
            }
                temp=temp->next;
                idx++;
            }
            return -1;
        }
        void reverse()
        {
            node*curr=head;
            node*prev=NULL;
            while(curr!=NULL)
            {
                node*next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;

            }
            head=prev;
        }
        void removen(int n)
        {
            int size=getsize();
            node*temp=head;
            for(int i=1;i<size-n;i++)
            {
                temp=temp->next;
            }
            node*l=temp->next;
            temp->next=temp->next->next;
            delete l;
        }
        int getsize()
        {
            node*temp=head;
            int size=0;
            while(temp!=NULL)
            {
                size++;
                temp=temp->next;
            }
            return size;
        }
    

    };

   int main()
   {
    list l1,l2,l3;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    // l1.insert_at_position(0,1);
//     l1.pop_front();
//     l1.pop_back();
//    cout<< l1.search(1);
//    l1.reverse();
l1.removen(2);
    
    l1.print();

   }




   