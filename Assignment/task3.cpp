#include<iostream>
using namespace std;
int main (){
    int n,i,j;
    cout<<"enter the size of the array:";
    cin>>n;
    int A[n];
    for (i = 0; i <n; i++)
    {
        cout<<"enter the elements of:"<< i <<"\n";
        cin>>A[i];
    }
    for ( i = 0; i <n; i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<"\n";
    for ( i = 0; i <n; i++)
    {
        cout<<A[i]*A[i]<<"\t";
    }
    
    return 0;
}