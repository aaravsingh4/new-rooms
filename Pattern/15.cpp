#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value of n:";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        char ch='A';
        for ( j= n; j >= i; j--)
        {
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}