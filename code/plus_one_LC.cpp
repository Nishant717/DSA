#include <iostream>
using namespace std;
int main()
{
    int arr[2] = {9,9}, i, j, o;
    cout << "enter number to be added : " << endl;
    cin >> o;
    arr[1] = arr[1] + o;
    for (i = 1; i >= 0; i--)
    {
        if (arr[i] >= 10)
        {
            j = arr[i] / 10;
            arr[i] = arr[i] % 10;
            arr[i - 1] = arr[i - 1] + j;
        }
    }
    cout << "your array is : " << endl;
    for (i = 0; i < 2; i++)
    {
        cout << arr[i] << endl;
    }
}
