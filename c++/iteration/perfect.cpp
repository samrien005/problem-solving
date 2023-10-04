#include<iostream>
using namespace std;
int main()
  {
    int n,num;
    cin>>n;
    while(n--)
    {
      int sum = 0;
      cin>>num;
      for(int i=1;i<num;i++)
      {
        if(num%i==0)
          sum += i;
      }
      if(sum==num)
        cout<<"true"<<endl;
      else
        cout<<"false"<<endl;
    }
    return 0;
  }
