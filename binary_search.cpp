#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target)
{
    int st=0;int end=n-1;
    while(st<=end)
    {
        int mid=(st+end)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            st=mid+1;
        }
        else{
           st= mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<binarysearch(arr,n,3);

}