
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector<int>intersection(vector<int>arr1,vector<int>arr2)
{
   int n=arr1.size();
   int m=arr2.size();
   sort(arr1.begin(),arr1.end());
   sort(arr2.begin(),arr2.end());
   vector<int>result;
   int i=0;
   int j=0;
   while(i<n&&j<m)
   {
    if(arr1[i]==arr2[j])
    {
        if(result.empty()||result.back()!=arr1[i])
        {
            result.push_back(arr1[i]);
        }
        i++;
        j++;
    }
    else if(arr1[i]<arr2[j])
    {
        i++;
    }
    else{
        j++;
    }
   }

  return result;


}
int main()
{
  vector<int>arr1={ 1,2,2,4,6};
  vector<int>arr2={1,5,6,8};
  vector<int>result=intersection(arr1,arr2);
  int a=result.size();
  for(int i=0;i<a;i++)
  {
    cout<<result[i]<<" ";
  }
}
