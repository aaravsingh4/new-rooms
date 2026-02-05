#include<iostream>
using namespace std;
int main (){
    int n,i;
    cout<<"enter the size of the array:";
    cin>>n;
    int A[n];
    cout<<"enter the elements of the array;";

    for ( i = 0; i <n; i++)
    {
        cin>>A[i];
    }
    
    int larg=A[0];
    for ( i = 0; i < n; i++)
    {
        if (A[i]>larg)
        {
            larg=A[i];
        }
        
    }
    cout<<"the largest element inf the arary is:"<<larg;
    return 0;
}