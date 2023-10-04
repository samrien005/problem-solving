#include<iostream>
using namespace std;
  int totalcount(int i)
  {
    int d, count=0;
    while(i!=0)
    {
      d=i%10;
      count++;
      i=i/10;
    }
    return count;
  }
  int totaldigit(int p)
  {
    int d,count=0;
    for(int i=1;i<=p;i++)
    {
     d=totalcount(i);
     count=count+d;
    } 
     return count;
  }
  
  int main()
  {
   int t,n;
   cin>>t;
   while(t--)
    {
    cin>>n;
    cout<<totaldigit(n)<<endl;
    }
    
    return 0;
  }




