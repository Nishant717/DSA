#include <iostream>
using namespace std;
int main()
{
    int arr1[100] = {1, 3, 5, 7, 9}, i, j, n = 0, k = 1, l, m, arr2[10] = {2, 4, 6, 8, 10,11}, temp,b=0;
    float x;
    for (i = 0; i <= 4; i++)
    {
        n++;
    }
    n--;
    cout << n << endl;
    for (j = 0; j <= 5; j++)
    {
        arr1[n + k] = arr2[j];
        k++;
    }
    cout << "your merged array is " << endl;
    l = n + k;
    for (i = 0; i < l; i++)
    {
        cout << arr1[i] << endl;
    }
    cout << "your sorted array is : " << endl;
    for (i = 0; i <= l; i++)
    {
        for (m = i + 1; m < l; m++)
        {
            if (arr1[i] > arr1[m])
            {
                temp = arr1[i];
                arr1[i] = arr1[m];
                arr1[m] = temp;
            }
        }
    }
    for (i = 0; i < l; i++)
    {
        cout << arr1[i] << endl;
        b++;
    }
    x=float(b)/2;
    cout<<"output : "<<x<<endl;
}