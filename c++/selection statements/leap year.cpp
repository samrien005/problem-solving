#include<iostream>
using namespace std;
int main(){
     int x,y;
    cin>>x;
    int z=0;
    while(x>0)
    {
      y=x%10;
      x=x/10;
    
      z=z+y;
    }
    cout<<z;
    
    return 0;
}
