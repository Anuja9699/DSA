#include<iostream>
using namespace std;
#include<cstring>
void lower(char upper[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(upper[i]>='a'&&upper[i]<='z')
        {
            continue;
        }
        else{
            upper[i]=upper[i]-'A'+'a';
        }
    }
}
int main()
{
    char upper[]="ANUJA";
    lower(upper,strlen(upper));
     for(int i=0;i<strlen(upper);i++)
     {
        cout<<upper[i];
     }
}