
#include<iostream>
using namespace std;
int jump(int arr[],int n)
{
    if(n==1)
    {
        return 0;
    }
    int jump=0;
    int farthest=0;int end=0;
    for(int i=0;i<n;i++)
    {
        farthest=max(farthest,i+arr[i]);
        if(i==end)
        {
            jump++;
            end=farthest;
        }
        
        if(end>=n-1)
        {
            break;
        }
    }
    return jump;
}
int main()
{
    int arr[]={2,3,1,1,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<jump(arr,n);

}
