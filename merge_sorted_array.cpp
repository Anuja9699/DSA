#include<iostream>
using namespace std;
#include<vector>
void merge(vector<int>&arr1,vector<int>&arr2,vector<int>&arr3)
{
    int n=arr1.size();
    int m=arr2.size();
   
    int i=0;int j=0;int k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
          arr3[k]=arr1[i];
          k++;
          i++;

        }
        else{
            arr3[k]=arr2[j];
          k++;
          j++;

        }

    }
    while(i<n)
    {
       arr3[k]=arr1[i];
          k++;
          i++; 
    }
    while(j<m)
    {
       arr3[k]=arr2[j];
          k++;
          j++; 
    }
}
int main()
{
   vector<int>arr1={1,3,5,6,8};
    vector<int>arr2={1,3,5,6,8};
    vector<int>arr3(arr1.size()+arr2.size());
    merge(arr1,arr2,arr3);
    int a=arr1.size()+arr2.size();
    for(int i=0;i<a;i++)
    {
        cout<<arr3[i]<<" ";
    }
   
     
}