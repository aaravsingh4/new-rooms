#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter the value of n:";
    cin>>n;
    for ( i = 1; i<=n; i++)
    {
        for ( j= n; j >= i; j--)
        {
            cout<<" ";
        }
        for ( j= 1; j <=2*i-1; j++)
        {
            cout<<"*";
        }
    
        cout<<endl;
    }


    for ( i=n; i>0; i--)
    {
        for ( j=0; j<=n-i; j++)
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