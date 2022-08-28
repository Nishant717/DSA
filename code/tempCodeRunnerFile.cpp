#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {3, 4, 5, 19}, i, j, o;
    cout << "enter number to be added : " << endl;
    cin >> o;
    arr[3] = arr[3] + o;
    for (i = 3; i <= 3; i--)
    {
        if (arr[i] >= 10)
        {
            j = arr[i] / 10;
            arr[i] = arr[i] % 10;
            arr[i - 1] = arr[i - 1] + j;
        }
    }
    cout << "your array is : " << endl;
    for (i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
}