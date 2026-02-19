#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,rem,revnum=0;
    cin>>n;
    while (n!=0)
    {
        rem=n%10;
        revnum=revnum*10+rem;
        n=n/10;
    }
    cout<<revnum;
}