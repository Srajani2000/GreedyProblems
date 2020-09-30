#include <bits/stdc++.h>
using namespace std;

int WoodCut(vector<int> a,vector<int> b,int n)
{
    int ans = 2;
    for(int i=1;i<n-1;i++){if(a[i]-a[i-1]>b[i])ans++;
    else if(a[i+1]-a[i]>b[i]){ans++; a[i]+=b[i];}}
return ans;
}

int main()
{
  
    int tree;
    cin>>tree;
    int size = tree;
    vector<int> a;
    vector<int> b;
    while(tree--)
    {
        int a1,b1;
        cin>>a1>>b1;
        a.push_back(a1);
        b.push_back(b1);
    }
    if(size==1)
    {
        cout<<1<<endl;
    }
    else
    cout<<WoodCut(a,b,size)<<endl;
    return 0;
}