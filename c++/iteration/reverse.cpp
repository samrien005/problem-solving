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
       int r,n,m,rev=0;
    cin>>n;
    m=n;
    while(n>0)
    {
      r=n%10;
      n=n/10;
      rev=rev*10+r;
    }
    cout<<rev;
    
    return 0;
}