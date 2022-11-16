#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}
    };
    int n=4;
    int sr=0, sc=0;
    int er=n-1,ec=n-1;
    while(sr<=er && sc<=ec)
    {
        for(int j=sc;j<=ec;j++ )//starting row
        {
            cout<<arr[sr][j]<<" ";
        }
        sr++;
        for(int i = sr;i<=er;i++)//last row
        {
            cout<<arr[i][ec]<<" ";
        }
        ec--;
        for(int k = ec; k>=sc; k--)//last col
        {
            cout<<arr[er][k]<<" ";
        }
        er--;
        for(int l = er;l>=sr;l--) //starting col
        {
            cout<<arr[l][sc]<<" ";
        }   
        sc++;
    }
    return 0;
}