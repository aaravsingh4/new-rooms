#include<iostream>
#include<vector>
using namespace std;
int main (){
    int i,j,rows,cols;
    cout<<"enter number of rows and cols:";
    cin>>rows>>cols;
    vector<vector<int>> A(rows,vector<int>(cols));

    cout<<"enter the elementds of the matrix;\n";
    for ( i = 0; i <rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout<<"enter element of "<<i<<","<<j<<": ";
            cin>>A[i][j];
        }
        cout<<"\n";
    }
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            if (i==j)
            {
                cout<<A[i][j]<<"\t";
            }
            
        }
        
    }
    return 0;
    
}