#include<iostream>
using namespace std;
int missing(int arr[],int n)
{
    int m=n+1;
    int sum=0;
    int expectedsum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        
    }
    expectedsum=((m*(m+1))/2);
   return expectedsum-sum;
}
int main()
{
    int arr[]={1,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<missing(arr,n);

}