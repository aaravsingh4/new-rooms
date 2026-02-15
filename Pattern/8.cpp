#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter the value of n:";
    cin>>n;
    for ( i=n; i>0; i--)
    {
        for ( j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for ( k = 2*i-1; k>=1; k--)
        {
            cout<<"*";  
        }
        

        cout<<endl;
    }
    return 0;
}