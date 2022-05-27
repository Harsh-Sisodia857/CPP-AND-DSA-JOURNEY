#include<iostream>
using namespace std;
void countSort(int arr[],int n){
    int arr1[n],k=0;
    int maximum = arr[0];
    for(int i = 0; i<n; i++){
        maximum = max(maximum,arr[i]);
    }
    int countArr[maximum] = {0};
    for(int i =0 ; i<n; i++)
        countArr[arr[i]]++;
    for(int i = 1 ; i <= maximum ; i++){
        countArr[i] += countArr[i-1];
    }
    for(int i = n - 1; i>= 0; i++){
       arr1[--countArr[arr[i]]] = arr[i];
    }
    for(int i = 0; i<7; i++)
        cout<<arr1[i]<<" ";
}
int main(int argc, char const *argv[])
{
    int arr[] = {3,4,4,11,3,1,9};
    countSort(arr,7); 
    
    return 0;
}
