#include<iostream>
using namespace std;
#include<stack>
string string_reverse(string str)
{
    string ans;
    stack<char>s;
   for(int i=0;i<str.size();i++)
   {
      s.push(str[i]);
      
   }
   while(!s.empty())
   {
    ans+=s.top();
    s.pop();

   }
   return ans;
}
int main()
{
  string str="anuja";
  cout<<string_reverse(str);  
}
