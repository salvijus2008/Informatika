#include <iostream>

using namespace std;

int main()
{
 int s, m, h;
 cout<<"sekundes: ";
 cin>>s;
 cout<<"minutes: ";
 cin>>m;
 cout<<"valandos: ";
 cin>>h;
 if(s == 0)
 {
     m=m-1;
     s=59;
     if(m==-1)
     {
         h=h-1;
         m=59;
         s=59;
     }
 }
 else
 {
     s=s-1;
 }
cout<<"valandu: ";
cout<<h<<endl;
cout<<"minuciu ";
cout<<m<<endl;
cout<<"sekundziu ";
cout<<s<<endl;
    return 0;
}
