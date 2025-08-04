#include<iostream>
using namespace std;
#include<string>
#include<cstring>
#include<algorithm>
string reverse_str(string s)
{
 int n=s.length();
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            string word="";
            while(i<n && s[i]!=' ')
            {
                word+=s[i];
                i++;

            }
            reverse(word.begin(),word.end());
            if(word.length()>0)
            ans+=" "+word;
        }
        return ans.substr(1);
    }

int main()
{
    string str="the sky is blue";
    cout<<reverse_str(str);
}