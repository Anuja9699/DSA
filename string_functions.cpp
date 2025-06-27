#include<iostream>
using namespace std;
#include<cstring>
int main()
{ char str1[]="anuja";
    char str2[]="hinge";
     cout<<strcmp(str1,str2)<<endl;;
    char str3[30];
    strcat(str1,str2);
    cout<<str1<<endl;
    strcpy(str3,str1);
    cout<<str3<<endl;
  
    
}