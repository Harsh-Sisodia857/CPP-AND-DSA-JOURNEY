#include<iostream>
using namespace std;
void swap(int arr[],int a,int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void countSort(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr,low,mid);
            low++;mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1,1,2,1,0,2,1,0};
    countSort(arr,8);
    for(int i = 0 ; i<8; i++)
        cout<<arr[i]<<" ";
    return 0;
}
