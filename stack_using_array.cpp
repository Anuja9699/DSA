#include<iostream>
using namespace std;
#include<vector>
class mystack{
    public:
    vector<int>vec;
    void push(int val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        vec.pop_back();
    }
    int top()
    {
        int idx=vec.size()-1;
        return vec[idx];
    }

};
int main()
{
   mystack s1;
   mystack s2;
   s1.push(1);
   s1.push(2);
   s1.push(3);
   s2.push(4);
   s2.pop();
   cout<<s1.top();

}