#include <iostream>
using namespace std;
int main()
{
    
    string c;
    cin>>c;
    
    if(c=="P"||c=="p")
      cout<<"PrepBytes"<<endl;
    else if(c=="Z"||c=="z")
      cout<<"Zenith"<<endl;
    else if(c=="E"||c=="e")
      cout<<"Expert Coder"<<endl;
    else if(c=="D"||c=="d")
      cout<<"Data Structure"<<endl;
    
    return 0;
}
