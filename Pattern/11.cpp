#include<iostream>
using namespace std;
int main(){
    int n,i,j,a;
    cout<<"enter the value of n:";
    cin>>n;
    
    for ( i = 1; i <=n; i++)
    {
        for (j =1; j<= i; j++)
        {if((i+j)%2==0)
        {
            a=0;
        }
        else
        {
            a=1;
        }
            cout<<a;
        } 
        cout<<endl;}
    
    return 0;
}