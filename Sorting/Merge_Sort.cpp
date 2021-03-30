#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int l, int mid, int n)
{
    int n1=mid-l+1;
    int n2=n-mid;

    int temp1[n1],temp2[n2];

    for (int i=0;i<n1;i++)
    {
        temp1[i]=arr[l+i];
    }
    for (int j=0;j<n2;j++)
    {
        temp2[j]=arr[mid+1+j];
    }
    int i=0, j=0, k=l;
    while(i<n1 && j<n2)
    {
        if (temp1[i]<=temp2[j])
        {
            arr[k]=temp1[i];
            i++;

        }
        else
        {
            arr[k]=temp2[j];
            j++;

        }
        k++;
    }
    while (i<n1)
    {
        arr[k]=temp1[i];
        k++;
        i++;
    }
    while (j<n2)
    {
        arr[k]=temp2[j];
        k++;
        j++;
    }


}

void merge_sort(int arr[], int l, int n)
{
    if (l<n)
    {

    int m=(l+n)/2;
    merge_sort(arr, l, m);
    merge_sort(arr, m+1, n);
    solve(arr, l, m, n);
    }
}

int main()
{
    int arr[]={5, 4, 7, 7, 10, 45, 12, 14, 2, 11};
    cout<<"Original array: ";
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSorted array: ";

    merge_sort(arr, 0, 9);

    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nOriginal array: ";
    int *sorted_arr=new int[12]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i=0;i<12;i++)
    {
        cout<<sorted_arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    merge_sort(sorted_arr, 0, 11);
    for (int i=0;i<12;i++)
    {
        cout<<sorted_arr[i]<<" ";
    }
}
