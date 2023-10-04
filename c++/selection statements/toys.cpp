#include <iostream>
using namespace std;
int main()
{
	int a,i=0;
    cin>>a;
    while(a--)
	{
      int t,b;
      cin>>t>>b;
      if(b>=t+2)
      i++;
    }
    cout<<i<<endl;
    
    return 0;
}
