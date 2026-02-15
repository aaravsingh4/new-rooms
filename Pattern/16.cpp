#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value of n:";
    cin>>n;
    char ch='A';
    for ( i = 1; i <=n; i++)
    {
        for ( j= 1; j <= i; j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch+=1;
    }
    return 0;
}