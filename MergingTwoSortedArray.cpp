#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3, 11, 19};
    int arr2[] = {3, 8, 9, 17, 26};
    int sizeOfArr1 = (sizeof(arr1) / sizeof(arr1[0]));
    int sizeOfArr2 = (sizeof(arr2) / sizeof(arr2[0]));
    int n = (sizeOfArr1 + sizeOfArr2);
    int sort[n];
    int i = 0, j = 0, count = 0;
    while (i != sizeOfArr1 && j != sizeOfArr2)
    {
        if (arr1[i] < arr2[j])
        {
            sort[count] = arr1[i];
            count++;
            i++;
        }
        else
        {
            sort[count] = arr2[j];
            count++;
            j++;
        }
    }
    while (i != sizeOfArr1)
    {
        sort[count] = arr1[i];
        count++;
        i++;
    }
    while (j != sizeOfArr2)
    {
        sort[count] = arr2[j];
        count++;
        j++;
    }
    for (i = 0; i < n; i++)
    {
        cout << sort[i] << " ";
    }
    return 0;
}
