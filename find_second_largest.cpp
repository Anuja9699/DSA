#include<iostream>
using namespace std;
#include<vector>
int find_second_largest(vector<int>arr)
{
    int n=arr.size();
    int largest=arr[0];
    int secondlargest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
          

        }
        else if(arr[i]>secondlargest && arr[i]<largest)
        {
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}

int main()
{
    vector<int>arr={23,54,43,65,34};
    cout<<find_second_largest(arr);
}