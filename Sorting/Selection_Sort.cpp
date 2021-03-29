#include <iostream>

using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i=0;i<n-1;i++)
    {
        int k=i;
        int x=arr[k];
        for (int j=i+1;j<n;j++)
        {
            if (x>arr[j])
            {
                k=j;
            }
        }
        x=arr[k];
        arr[k]=arr[i];
        arr[i]=x;

    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int *arr={new int[10]{5, 4, 7, 7, 10, 45, 12, 14, 2, 11}};
    cout<<"Original array: ";
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    selection_sort(arr, 10);

    cout<<"\nOriginal array: ";
    int *sorted_arr=new int[12]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i=0;i<12;i++)
    {
        cout<<sorted_arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    selection_sort(sorted_arr, 12);


}
