#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int size;
    int arr[100];
    heap()
    {
        size = 0;
    }
    void heapify(int arr[], int size, int idx)
    {

        int left = 2 * idx;
        int right = 2 * idx + 1;
        int largest = idx;
        if (left <= size && (arr[left] > arr[largest]))
            largest = left;
        if (right <= size && (arr[right] > arr[largest]))
            largest = right;
        if (largest != idx)
        {
            swap(arr[largest], arr[idx]);
            heapify(arr, size, largest);
        }
    }

    void heapSort(int arr[], int n)
    {
        int size = n;
        
        while (size > 1)
        {
            // step 1
            swap(arr[1], arr[size]);
            size--;
            // step 2 --- heapify root node which is at first index
            heapify(arr, size, 1);
        }
    }
};

int main()
{
    int arr[] = {-1, 85, 6, 72, 1};
    heap h;
    int size = 6;
    h.heapSort(arr, size);
    for (int i = 1; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}