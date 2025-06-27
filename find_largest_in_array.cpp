#include<iostream>
using namespace std;
int find_largest(int arr[],int n)
{
   int large=arr[0];
   for(int i=0;i<n;i++)
   {
    if(arr[i]>large)
    {
        large=arr[i];
    }
   }
   return large;
}
int main()
{
 int arr[]={12,45,43,98,89};
 int n=sizeof(arr)/sizeof(int);
 cout<<find_largest(arr,n);

}