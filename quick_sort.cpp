#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int pivot(int arr[],int l,int r){
    int p = arr[r];
    int i = l-1;
    int j;
    for(j = l; j<r; j++){
        if(arr[j]<arr[r]){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quick_sort(int arr[],int l,int r){
    if(l<r)
    {
    int pi = pivot(arr,l,r);
    quick_sort(arr,l,pi-1);
    quick_sort(arr,pi+1,r);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {2,3,5,11,42,13,15};
    int s = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,s-1);
    for(int i=0; i<s; i++)
            cout<<arr[i]<<" ";
    return 0;
}
