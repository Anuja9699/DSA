#include<iostream>
using namespace std;
#include<string>
string integer_to_roman(int num)
{
    int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string str[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string ans=" ";
    while(num>0)
    {
        for(int i=0;i<13;i++)
        {
            if(num>=arr[i])
            {
                num-=arr[i];
                ans+=str[i];
                break;
            }
        }
    }
    return ans;
} 
int main()
{
  int num=1994;
  cout<<integer_to_roman(num);

}
