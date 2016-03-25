#include "iostream"
#include "string.h"
#include "stack"
using namespace std;
void rev(char *p);
main()
 {
   char a[10];
   cout<<"enter a string : ";
   cin>>a;
   rev(a);
   cout<<"reverse is : ";
   cout<<a;
   return 0;
  }
   
   void rev (char *p)
    {
    int i;
   stack <char> ob;
   for(i=0;i<strlen(p);i++)
   ob.push(p[i]);
   
   for(i=0;i<strlen(p);i++)
  {
   p[i]=ob.top();
   ob.pop();
  }
 }
