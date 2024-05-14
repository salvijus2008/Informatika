
#include <iostream>

using namespace std;

int main()
{
 int s, sh, p;
 cout<<"svarai: ";
 cin>>s;
 cout<<"silingai: ";
 cin>>sh;
 cout<<"pencai: ";
 cin>>p;
 if(p == 0)
 {
     sh=sh-1;
     p=11;
     if(sh==-1)
     {
         s=s-1;
         sh=19;
         p=11;
     }
 }
 else
 {
     p=p-1;
 }
cout<<"liko svaru ";
cout<<s<<endl;
cout<<"liko silingu ";
cout<<sh<<endl;
cout<<"liko pencu ";
cout<<p<<endl;
    return 0;
}
