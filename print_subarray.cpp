#include<iostream>
using namespace std;
#include<climits>
#include<algorithm>
int  subarray(int arr[],int n)
{
    int sum=INT_MIN;
    for(int st=0;st<n;st++)
    {  
        int currsum=0;
        for(int end=st;end<n;end++)
        {
             currsum+=arr[end];
             sum=max(sum,currsum);
        }
       
    }
    return sum;
}
int main()
{
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<subarray(arr,n);
}