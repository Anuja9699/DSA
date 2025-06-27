#include<iostream>
using namespace std;
#include<cstring>
void lower(char upper[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(upper[i]>='A'&&upper[i]<='A')
        {
            continue;
        }
        else{
            upper[i]=upper[i]-'a'+'A';
        }
    }
}
int main()
{
    char upper[]="anuja";
    lower(upper,strlen(upper));
     for(int i=0;i<strlen(upper);i++)
     {
        cout<<upper[i];
     }
}