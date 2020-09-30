#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        while(n)
        {
            x = min(x,(x/2)+10);
            n--;
        }
        while(m)
        {
            x = x-10;
            m--;
        }
        if(x<=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}