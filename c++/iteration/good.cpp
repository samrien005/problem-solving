#include<iostream>
using namespace std;
  int main()
  {
    
    long long t,n,base,pr,p=1,fv=0,i=0,value=0;
    cin>>t;
    while(t--){
      cin>>n;
      i =0;
      fv=0;
      p=1;
      while(fv<=n){
        pr = i;
        fv += p;
        p *= 3;
        i++;
      }
      while(p){
        if(fv - p>=n){
          fv = fv - p;
        }
        p /= 3;
      }
      cout<<fv<<endl;
      
    }
    
    return 0;
  }

