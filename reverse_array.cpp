#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void reverse(int arr[],int n)
{
  int st=0;int end=n-1;
  while(st<end)
  {
    int temp=arr[st];
    arr[st]=arr[end];
    arr[end]=temp;
    st++;
    end--;

  }
  print(arr,n);  
}
int main()
{
  int arr[]={1,20,3,4,5,6};
  int n=sizeof(arr)/sizeof(int);
  reverse(arr,n);
}