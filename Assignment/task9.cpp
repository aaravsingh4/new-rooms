#include<iostream>
#include<vector>
using namespace std;
int main (){
    int i,j,rows,cols;
    cout<<"enter number of rows and cols:";
    cin>>rows>>cols;
    vector<vector<int>> A(rows,vector<int>(cols));
    cout<<"enter the elements of the matrix:\n";
    for ( i = 0; i <rows;i++)
    {
        for ( j = 0; j < cols; j++)
        {
            cout<<"enter element of "<<i<<","<<j<<": ";
            cin>>A[i][j];
        }
        cout<<"\n";
    }
    
    int sum;

    for ( i = 0; i < rows; i++)
    {
        sum=0;
        for ( j = 0; j < cols; j++)
        {
            sum=sum+A[i][j];
        }
        cout<<"the sum of row "<<i+1<<" is "<<sum<<"\n";
    }
    return 0;

}