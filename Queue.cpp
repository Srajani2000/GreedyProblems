#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x[n];
    for(int i=0;i<n;i++) cin>>x[i];
    sort(x,x+n);
    long long sum = 0;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(sum<=x[i])
        {
            count++;
            sum = sum+x[i];
        }
     
    }
    cout<<count<<endl;
}