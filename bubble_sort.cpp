#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void bubble(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {    bool isswap=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
              swap(arr[j],arr[j+1]);
               isswap = true;
             
            }
        }
        if(isswap==false)
        {
             print(arr,n);
            return;
        }
    }
    print(arr,n);
}
int main()
{
    int arr[]={5,3,8,4,9};
    int n=sizeof(arr)/sizeof(int);
    bubble(arr,n);
}