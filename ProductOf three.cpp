#include <bits/stdc++.h>
using namespace std;

void  factorization(long m)
{
    vector<long > fact;
    for(int i=2;i<sqrt(m);i++)
    {
        if(m%i==0){
        fact.push_back(i);
        if(m/i!=i)
        {
            fact.push_back(i);
        }
      
        }
    }



    bool found = false; 
    int k= fact.size();
    for(int i=0;i<k;i++)
    {
      long  a = fact[i];
      for(int j=0;j<k;j++)
      {
          long b = fact[j];
          if((a!=b) && ((m%(a*b))==0  && (m/(a*b))!=a && (m/(a*b))!=b && (m/(a*b))!=1))
          {
            cout<<"YES"<<endl;
               cout << a << " " << b << " "
                     << (m / (a * b)); 
                found = true; 
                break;
          }
      }
            if (found) 
                break; 
    }

            if (!found) 
                cout << "NO"; 
    cout<<endl;

}
int main()
{

    int test;
    cin>>test;
    while(test--)
    {
        int x;
        cin>>x;
        factorization(x);
    }
    
    return 0;
}