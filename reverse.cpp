#include "iostream"
using namespace std;
class stack
 {
  public:
   void rev( )
    {
    int n,i;
    char s[10];
     cout<<"enter the size of a string less than 10 : ";
     cin>>n;
      cout <<"enter the string:";
       for(i=0;i<n;i++)
       cin>>s[i];
       cout <<"reverse of the string is:";
     for(i=n-1;i>=0;i--)
    cout<<s[i];
    }
    };
   main()
   {
    stack c;
    c.rev();
    return 0;
    } 
