// Reverse an array
// input : 1 3 5 7 9
// output : 9 7 5 3 1

#include <iostream>
using namespace std;
int main()
{
    int arr[5], start, end, temp, i;
    cout << "enter your array : " << endl;
    for (i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    start = 0;
    end = 4;
   /* while (start <= end)
    {
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }*/
      while (start <= k)
    {
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
        start=k+1;
        end=n;
        while (start <= end)
    {
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }

    cout << "your  reverse array is : " << endl;
    for (i = 0; i <= 4; i++)
    {
        cout << arr[i] << endl;
    }
}