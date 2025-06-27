#include<iostream>
using namespace std;
#include<string>
bool anagram(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }
    int freq[23]={0};
    for(int i=0;i<str1.length();i++)
    {
        int idx=str1[i]-'a';
        freq[idx]++;
    }
    for(int i=0;i<str2.length();i++)
    {
       int idx=str2[i]-'a';
       if(freq[idx]==0)
       {
        return false;
       }
       else{
        freq[idx]--;
       }

    }
    return true;
}

int main()
{
   string str1="ball";
   string str2="allb";
   cout<<anagram(str1,str2);
}