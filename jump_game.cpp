#include<iostream>
using namespace std;
int canjump(int arr[],int n)
{
    int maxreach=0;
  for(int i=0;i<n;i++)
  {
     if(i>maxreach)
     {
        return false;
     }
     maxreach=max(maxreach,i+arr[i]);
     if(maxreach>=n-1)
     {
        return true;
     }
  }
  return false;
}
int main()
{
  int arr[]={ 3,2,1,0,4};
  int n=sizeof(arr)/sizeof(int);
  cout<<canjump(arr,n);
}