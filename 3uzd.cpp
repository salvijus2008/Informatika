#include <iostream>

using namespace std;

int main()
{
    int x, y, n;
    cout<< "zuvytes kaina: ";
    cin>>x;
    cout<< "sraiges kaina: ";
    cin>>y;
    cout<<"kiek pirksi sraigiu: ";
    cin>>n;
    cout<<"reiks sumoketi: ";
    cout<<n*y+n*2*x+x*2+y;

    return 0;
}
