#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i=1;i<n;i++)
    {
        int j=i-1;
        while(j>-1)
        {
            if (arr[j]>arr[i])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
            j--;

        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int *arr={new int[10]{5, 4, 6, 7, 10, 45, 12, 14, 32, 11}};
    cout<<"Original array: ";
    for (int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    insertion_sort(arr, 10);

    cout<<"\nOriginal array: ";
    int *sorted_arr=new int[12]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i=0;i<12;i++)
    {
        cout<<sorted_arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    insertion_sort(sorted_arr, 12);


}
