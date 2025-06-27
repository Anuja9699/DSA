#include<iostream>
using namespace std;
int binary(int arr[],int n,int target)
{
    int st=0;int end=n-1;
    while(st<=end)
    {
        int mid=(st+end)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target>arr[mid])
        {
         st=mid+1;
        }
        else{
        end=mid-1;
     }
    } 
    return st;      
}
int main()
{
    int arr[]={1,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int target=6;
    cout<<binary(arr,n,target);

}
