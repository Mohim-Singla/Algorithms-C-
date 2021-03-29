#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int l, int n)
{
    int pivot=arr[n-1];
    int i=l-1;
    int j=l;
    do{
        if (arr[j]<pivot)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        j++;
    }while(j!=n);
    int temp=arr[i+1];
    arr[i+1]=arr[n-1];
    arr[n-1]=temp;
    return i+1;
}

void quick_sort(int arr[], int l, int n)
{
    int j;
    if (l<n)
    {
        j=solve(arr, l, n);
        quick_sort(arr,l,j);
        quick_sort(arr, j+1, n);
    }

}

int main()
{
    int *arr={new int[11]{5, 4, 7, 7, 10, 45, 12, 14, 2, 11, INT_MAX}};
    cout<<"Original array: ";
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    quick_sort(arr, 0, 10);

    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nOriginal array: ";
    int *sorted_arr=new int[13]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, INT_MAX};
    for (int i=0;i<12;i++)
    {
        cout<<sorted_arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    quick_sort(sorted_arr, 0, 12);

    for (int i=0;i<12;i++)
    {
        cout<<sorted_arr[i]<<" ";
    }

}
