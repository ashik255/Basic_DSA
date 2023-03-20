# Basic_DSA
Linear Search:
Linear search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm.
Time Complexity: O(n)
Space Complexity: O(1)
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

Binear Search:

Problem: Given a sorted array arr[] of n elements, write a function to search a given element x in arr[] and return the index of x in the array. Consider array is 0 base index.
Examples: 
Input: arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170}, x = 110
Output: 6
Explanation: Element x is present at index 6. 
Input: arr[] = {10, 20, 30, 40, 60, 110, 120, 130, 170}, x = 175
Output: -1
Explanation: Element x is not present in arr[].
Linear Search Approach: A simple approach is to do a linear search. The time complexity of the Linear search is O(n). Another approach to perform the same task is using Binary Search.  
Binary Search Approach: 
Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). 
Binary Search Algorithm: The basic steps to perform Binary Search are:
Sort the array in ascending order.
Set the low index to the first element of the array and the high index to the last element.
Set the middle index to the average of the low and high indices.
If the element at the middle index is the target element, return the middle index.
If the target element is less than the element at the middle index, set the high index to the middle index – 1.
If the target element is greater than the element at the middle index, set the low index to the middle index + 1.
Repeat steps 3-6 until the element is found or it is clear that the element is not present in the array.
 
Binary Search Algorithm can be implemented in the following two ways
Iterative Method
Recursive Method
Summary:
Binary search is an efficient algorithm for finding an element within a sorted array.
The time complexity of the binary search is O(log n).
One of the main drawbacks of binary search is that the array must be sorted.
Useful algorithm for building more complex algorithms in computer graphics and machine learning.


Iterative Method:
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key)
{
    int start= 0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]== key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start= mid+1;
        }
        else
        {
            end= mid-1;
        }
mid= start+end;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<< binarySearch(arr,n,key)<<endl;
    return 0;
}
