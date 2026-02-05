#include<iostream>
using namespace std;
int main (){
    int n,i;
    cout<<"enter the value of n:";
    cin>>n;
    int A[n];
    cout<<"enter the elements of the array:";
    for ( i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    
    int count=0;
    for ( i = 0; i < n; i++)
    {
        if (A[i]%2==0)
        {
            count++;
        }
    }
    cout<<"the number of even elements in the array is:"<<count;
    return 0;
}