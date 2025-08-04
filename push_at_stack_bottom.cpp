#include<iostream>
using namespace std;
#include<stack>
void push_bottom(stack<int>&s,int val){
    if(s.empty())
    {
        s.push(val);
    }
    else{stack<int>s2;
    while(!s.empty())
    {
        s2.push(s.top());
        s.pop();
    }
    s.push(val);
    while(!s2.empty())
    {
        s.push(s2.top());
        s2.pop();
    }
}
    


}
int main()
{
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
push_bottom(s,0);
while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }

}