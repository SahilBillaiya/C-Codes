#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(j=2;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
for(i=n;i>0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(j=2;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
