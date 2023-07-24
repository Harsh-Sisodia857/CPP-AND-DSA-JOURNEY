#include<bits/stdc++.h>
using namespace std;

class heap{
    public :
        int size;
        int arr[100];
        heap(){
            size = 0;
        }
        void insert(int val){
            size = size + 1;
            int idx = size;
            arr[idx] = val;

            while(idx > 1){
                int parent = idx / 2;
                if(arr[parent] < arr[idx]){
                    swap(arr[parent], arr[idx]);
                    idx = parent;
                }
                else
                    return;
            }
        }
        void print(){
            for (int i = 1; i <= size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void swap(int &a,int &b){
            int temp = a;
            a = b;
            b = temp;
        }

        void deleteFromHeap(){
            if(size == 0)
                {
                cout << "NO ELEMENT TO DELETE" << endl;
                return;
                }

            // remove root
            arr[1] = arr[size];
            // remove last element
            size--;
            // check property of heap --> satisfied or not
            int idx = 1;
            while(idx < size){
                int left = 2 * idx;
                int right = 2 * idx + 1;
                if(left < size && (arr[left] > arr[1] || arr[right] > arr[1])){
                    if(arr[left] > arr[right]){
                        swap(arr[1], arr[left]);
                        idx = left;
                    }
                    else {
                    swap(arr[1], arr[right]);
                    idx = right;
                    }
                }
                else
                    return;
            }
        }

        void heapify(int arr[],int size,int i){
            int largest = i;
            int left = 2 * i;
            int right = 2 * i + 1;
            if(left <= size && arr[left] > arr[largest]){
                largest = left;
            }
            if(right <= size && arr[right] > arr[largest])
                largest = right;
            if(largest != i){
                // largest points to either left or right
                swap(arr[largest], arr[i]);
                // Now checking for node which is pointed by largest pointer
                heapify(arr, size, largest);
            }
        }
};

int main(){
        heap h;
        // h.insert(12);
        // h.insert(1);
        // h.insert(16);
        // h.insert(18);       
        // h.print();
        // h.deleteFromHeap();
        // h.print();
        
        // creating heap using array
        int arr[] = {-1, 2, 5, 6, 23, 53};
        int n = 6;
        for (int i = n / 2; i > 0; i--)
            h.heapify(arr, n, i);

        for (int i = 1; i  < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;

        return 0;
  }