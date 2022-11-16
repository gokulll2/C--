
#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int s,int e)
{
    int pivot= arr[s];
    int cnt=0;
    for(int i=s+1;i<e;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    //Place Pivot at right position.
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);
    
    //Handle Left and Right part.
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        while(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }

    }
    return pivot;
}
void quickSort(int arr[],int s ,int e)
{
    //Base Case
    if(s<=e)
    return;

    int p=Partition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
}
