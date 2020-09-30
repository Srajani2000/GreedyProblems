#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
    cin>>n>>k;
    int x[n];
    for(int i=0;i<n;i++) cin>>x[i];
    int ans[n];
    int res = 0;
    if(n>1)
    {

    
    for(int j=1;j<n;j++)
    {
        int sum = k-(x[j-1]+x[j]);
        // cout<<"SUM "<<sum<<" x[i] "<<x[j]<<" x[j-1] "<<x[j-1]<<" k "<<k<<endl;
        if(sum>0){
        res = res+sum;
        x[j] = x[j]+sum;
        }
    }
    cout<<res<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }


    }
    else
    {
        cout<<0<<endl;
        cout<<x[0]<<endl;

      
    }

    
}