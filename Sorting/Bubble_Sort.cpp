#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{
    int flag=0;
    for (int j=0;j<9;j++)
    {
        for (int i=0;i<n-1;i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag=1;
            }
        }
        //Making bubble sort adaptive
        if (flag==0)
        {
            break;
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
    bubble_sort(arr, 10);

    cout<<"\nOriginal array: ";
    int *sorted_arr=new int[12]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i=0;i<12;i++)
    {
        cout<<sorted_arr[i]<<" ";
    }
    cout<<"\nSorted array: ";
    bubble_sort(sorted_arr, 12);


}
