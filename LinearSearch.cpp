#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << " Size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "Array of number" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Search of Key" << endl;
    cin >> key;
    cout << "Result of search " << linearSearch(arr, n, key);
}