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
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    if((x<y && x>z)|(x<z && x>y))
      cout<<x;
    else if((y<x && y>z)|(y<z && y>x))
      cout<<y;
    else if((z<y && z>x)|(z<x && z>y))
      cout<<z;

    return 0;
}