/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int rem,count=0;
      while(n!=0)
      {
        rem=n%10;
        n=n/10;
        if(rem==5)
          count++;
      }
      cout<<count<<endl;
    }
}