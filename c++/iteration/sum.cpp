#include<iostream>
using namespace std;
int main(){
     int n,r;
    cin>>n;
    int sum=0;
    while(n>0)
    {
      r=n%10;
      n=n/10;
    
      sum=sum+r;
    }
    cout<<sum;
    
    return 0;
}
