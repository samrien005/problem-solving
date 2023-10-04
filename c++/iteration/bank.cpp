#include<iostream>
using namespace std;
int main()
{ 
    int t,n;
    cin>>t;
    int sumarr[t],i=0;
    for(int j=1;j<=t;j++){
        cin>>n;
        int p=2,sum=0;
        while(n!=1){
            if(n%p==0){
                n = n/p;
                sum+=p;
            }
            else{
                p++;
            }
        }
        sumarr[i++] = sum;
    }
    for(int k=0;k<t;k++){
        cout<<sumarr[k]<<endl;
    }
}
