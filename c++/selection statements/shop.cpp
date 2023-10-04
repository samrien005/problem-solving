#include<iostream>
using namespace std;
  int main()
  {
    
    int N;
    float q,p;
    cin>>N;
    while(N--){
      cin>>q>>p;
      if(q>100){
        printf("%.1f\n",q*0.8*p);
      }
      else{
        printf("%.1f\n",q*p);
      }
    }
    
    return 0;
  }
