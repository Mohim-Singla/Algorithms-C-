#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void count_sort(int arr[], int n)
{
    int x = *max_element(arr, arr+n);
    int temp[x+1]={0};
    for (int i=0;i<n;i++)
    {
        temp[arr[i]]++;
    }
    for (int i=0;i<=x;i++)
    {
        while (temp[i]>0)
        {
            cout<<i<<" ";
            temp[i]--;
        }
    }
}

int main()
{
    int *arr={new int[10]{5, 4, 7, 7, 45, 10, 12, 14, 32, 11}};
    cout<<"Original array: ";
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    count_sort(arr, 10);

    cout<<"\nOriginal array: ";
    int *sorted_arr=new int[12]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i=0;i<12;i++)
    {
        cout<<sorted_arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    count_sort(sorted_arr, 12);


}
