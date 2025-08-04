#include<iostream>
using namespace std;
class circularqueue{
    private:
    int size;
    int front;
    int rear;
    int *arr;
    public:
    circularqueue(int val)
    {
        size=val;
        front=-1;
        rear=-1;
        arr=new int[size];

    }
    bool empty()
    {
        return front==-1;
    }
    bool isfull()
    {
        return (rear+1)%size==front;
    }
    void enque(int val)
    {
        if(isfull())
        {
            cout<<"full";
            return;
        }
        if(empty())
        {
            front=rear=0;
        }
        else{
            rear=(rear+1)%size;
          
        }
          arr[rear]=val;
    }
    void deque()
    {
        if(empty())
        {
            cout<<"empty";
            return;
        }
        if(front==rear)
        {
front=rear=-1;
        }
        else{
            front=(front+1)%size;
        }
    }
    int peak()
    {
        if(empty())
        {
            cout<<"empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }
    void display()
    {
        if(empty())
        {
            cout<<"empty";
            return;
        } 
        for(int i=front;;i=(i+1)%size)
        {
            cout<<arr[i]<<" ";
            if(i==rear)
            {
                break;
            }
        }
    }

};
int main()
{
    circularqueue c1(5);
    c1.enque(1);
    c1.enque(2);
    c1.enque(3);

    c1.deque();
    c1.display();
}
