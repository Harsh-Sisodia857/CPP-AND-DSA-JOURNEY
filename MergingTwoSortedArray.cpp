#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3, 11, 19};
    int arr2[] = {3, 8, 9, 17, 26};
    int sizeOfArr1 = (sizeof(arr1) / sizeof(arr1[0]));
    int sizeOfArr2 = (sizeof(arr2) / sizeof(arr2[0]));
    int n = (sizeOfArr1 + sizeOfArr2);
    int res[n];
    int i = 0, j = 0, count = 0;
    while (i != sizeOfArr1 && j != sizeOfArr2)
    {
        if (arr1[i] < arr2[j])
        {
            res[count] = arr1[i];
            count++;
            i++;
        }
        else
        {
            res[count] = arr2[j];
            count++;
            j++;
        }
    }
    while (i != sizeOfArr1)
    {
        res[count] = arr1[i];
        count++;
        i++;
    }
    while (j != sizeOfArr2)
    {
        res[count] = arr2[j];
        count++;
        j++;
    }
    for (i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
