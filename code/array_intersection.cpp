#include <iostream>
using namespace std;
int main()
{
    int arr1[4] = {1, 2, 2, 4}, arr2[4] = {2, 4, 2, 8}, i, j, n;
    for (i = 0; i <= 3; i++)
    {
        n = arr1[i];
        for (j = 0; j <= 3; j++)
        {
            if (n == arr2[j])
            {
                cout << "Intersection is : " << n << endl;
                break;
            }
        }
    }
}