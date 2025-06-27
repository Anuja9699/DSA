#include<iostream>
using namespace std;
#include<vector>
int remove_duplicate(vector<int>&arr)
{
    int n=arr.size();
    if(n<=2)
    {
        return n;
    }
    int index=2;
    for(int i=2;i<n;i++)
    {
        if(arr[i]!=arr[i-2])
        {
           arr[index]=arr[i] ;
           index++;
        }

    }
    return index;
}
int main()
{
  vector<int>arr={1,2,2,4,5,5,5,6,7,8,8};
  int a=remove_duplicate(arr);
  for(int i=0;i<a;i++)
  {
    cout<<arr[i]<<" ";
  }
return 0;
}