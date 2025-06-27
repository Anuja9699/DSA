#include<iostream>
using namespace std;
#include<cstring>
bool palindrome(char arr[],int n)
{
    int st=0;int end=n-1;
    while(st<end)
    {
        if(arr[st++]!=arr[end--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[]="anuja";
    cout<<palindrome(arr,strlen(arr));
}