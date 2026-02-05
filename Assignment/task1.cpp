#include<iostream>
using namespace std;
int main (){
    int n,i;
    cin>>n;
    int A[n];
    for (i = 0; i <n; i++)
    {
        cin>>A[i];
    }
    for (i = 0; i <n; i++)
    {
        cout<<A[i]<<"\n";
    }
    return 0;
    
}