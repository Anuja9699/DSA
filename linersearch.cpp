#include<iostream>
using namespace std;
int  linersearch(int arr[],int n,int target)
{
   for(int i=0;i<n;i++)
   {
    if(arr[i]==target)
    {
        return i;
    }
   }
   return -1;
}
int main()
{
    int arr[]={12,34,65,87};
    int n=sizeof(arr)/sizeof(int);
    cout<<linersearch(arr,n,12);
}