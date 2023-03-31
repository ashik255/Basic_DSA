#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position

    int PivotIndex = s + count;
    swap(arr[PivotIndex], arr[s]);

    // left and right wala part maintain korbe
    int i = s, j = e;

    while (i < PivotIndex && j > PivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j++;
        }

        if (i < PivotIndex && j > PivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
}
void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partition / pivot create
    int p = partition(arr, s, e);

    // left part sort
    quickSort(arr, s, p - 1);

    // Right wala part sort
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[10] = {6, 3, 2, 6, 9, 99, 88, 77, 1, 2};
    int n = 10;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
