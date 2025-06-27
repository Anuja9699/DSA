#include<iostream>
using namespace std;
#include<cstring>
void reverse(char arr[],int n)
{
 int st=0;
 int end=n-1;
 while(st<end)
 {
    swap(arr[st],arr[end]);
    st++;
    end--;
 }
}
int main()
{
    char arr[]="anuja";
    reverse(arr,strlen(arr));
    for(int i=0;i<strlen(arr);i++)
    {
        cout<<arr[i];
    }

}
