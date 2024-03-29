<<<<<<< HEAD
//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low >= high)
        {

            return;
        }

        int PIndex = partition(arr, low, high);

        quickSort(arr, low, PIndex - 1);

        quickSort(arr, PIndex + 1, high);
    }

public:
    int partition(int arr[], int low, int high)
    {
        // Your code here
        int pivot = arr[low];

        int count = 0;

        for (int i = low + 1; i <= high; i++)
        {

            if (arr[i] <= pivot)
            {

                count++;
            }
        }

        int pivotIndex = low + count;

        swap(arr[pivotIndex], arr[low]);

        int i = low;

        int j = high;

        while (i < pivotIndex && j > pivotIndex)
        {

            while (arr[i] <= pivot)
            {

                i++;
            }

            while (arr[j] > pivot)
            {

                j--;
            }

            if (i < pivotIndex && j > pivotIndex)
            {

                swap(arr[i], arr[j]);

                i++;

                j--;
            }
        }

        return pivotIndex;
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.quickSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
=======
//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low >= high)
        {

            return;
        }

        int PIndex = partition(arr, low, high);

        quickSort(arr, low, PIndex - 1);

        quickSort(arr, PIndex + 1, high);
    }

public:
    int partition(int arr[], int low, int high)
    {
        // Your code here
        int pivot = arr[low];

        int count = 0;

        for (int i = low + 1; i <= high; i++)
        {

            if (arr[i] <= pivot)
            {

                count++;
            }
        }

        int pivotIndex = low + count;

        swap(arr[pivotIndex], arr[low]);

        int i = low;

        int j = high;

        while (i < pivotIndex && j > pivotIndex)
        {

            while (arr[i] <= pivot)
            {

                i++;
            }

            while (arr[j] > pivot)
            {

                j--;
            }

            if (i < pivotIndex && j > pivotIndex)
            {

                swap(arr[i], arr[j]);

                i++;

                j--;
            }
        }

        return pivotIndex;
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000], n, T, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        Solution ob;
        ob.quickSort(arr, 0, n - 1);
        printArray(arr, n);
    }
    return 0;
}
>>>>>>> e2277e9a094f7e4ead9de53c200b743794e80bbd
// } Driver Code Ends