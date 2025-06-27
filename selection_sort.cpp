#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selection(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {  
    int mid=i;
    for(int j=i+1;j<n;j++)
    {
     if(arr[j]<arr[mid])
     {
        mid=j;
     }
    }
    swap(arr[i],arr[mid]);
  } 
  print(arr,n); 
}
int main()
{
    int arr[]={5,9,6,0,1,4};
    int n=sizeof(arr)/sizeof(int);
    selection(arr,n);

}