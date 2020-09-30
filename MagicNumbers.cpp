#include <bits/stdc++.h>
using namespace std;

string MagicNum(vector<int> x,int &fourcount)
{
 int size = x.size();
 int i = 0;


 if(x[0]==4)
 {
     return "NO";
 }
 while(i<size)
 {
     if(x[i]==1)
     {
         fourcount = 0;
         if(x[i+1]==4)
         {
             fourcount = fourcount+1; 
             if(fourcount>2)
             {
                 return "NO";
             }
             if(x[i+2]==4)
             {
                 i=i+3;
                 fourcount = fourcount+1;
            if(fourcount>2)
             {
                 return "NO";
             } 
             }
             else if(x[i+2]==1){
                 i = i+2;
                 fourcount = 0;
             }
             else if(i+1==size-1)
             {
             if(fourcount>2)
             {
                
                 return "NO";
             }
                
                 return "YES";
             }
             else
             {
                 return "NO";
             }
         }
         else if(x[i+1]==1)
         {
             fourcount = 0;
             i = i+2;
         }
         else if(i==size-1)
         {
            if(fourcount>2)
             {
                 return "NO";
             }
             return "YES";
         }
         else
         {
             return "NO";
         }
     }
     else if(x[i]==4)
     {
         fourcount = fourcount+1;
          if(fourcount>2)
             {
                 return "NO";
             }
        if(x[i+1]==4)
        {
            i = i+2;
            fourcount = fourcount+1;
             if(fourcount>2)
             {
                 return "NO";
             }
        }  
        else if(x[i+1]==1)
        {
            fourcount = 0;
            i = i+2;
        }
        else if(i==size-1)
        {
             if(fourcount>2)
             {
                 return "NO";
             }
            return "YES";
        }
        else
        {
            return "NO";
        } 
     }
     else
     {
         return "NO";
     }

 }   
 
 if(i>=size)
 {
      if(fourcount>2)
             {
                 return "NO";
             }
     return "YES";
 }
}


int main()
{
    int fourcount = 0;
    long long m;
    vector<int> x;
    cin>>m;
    while(m>0)
    {
        int z = m%10;
        m = m/10;
        x.push_back(z);
    }
    reverse(x.begin(), x.end());
    cout<<MagicNum(x,fourcount)<<endl;
    return 0;
}