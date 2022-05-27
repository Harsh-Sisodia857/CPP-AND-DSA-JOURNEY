#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int arr1[n1],arr2[n2];
    // copying data to temp arrays
    for(int i=0;i<n1;i++)
        arr1[i] = arr[l+i];
    for(int i=0;i<n2;i++)
        arr2[i] = arr[i+mid+1];
    int i = 0,j=0,k=l;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            i++; 
            k++;
        }
        else{
            arr[k] = arr2[j]; 
            j++; 
            k++;
        }
    }
    while(i<n1){
        arr[k] = arr1[i]; 
        k++; 
        i++;
    }
    while(j<n2){
        arr[k] = arr2[j]; 
        k++; 
        j++;
    }
}
void mergesort(int arr[], int l, int r){
    if(l<r){
        int mid = (l + r) / 2;
        mergesort(arr,l,mid);
        mergesort(arr,mid + 1, r);
        merge(arr,l,mid,r);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {3,4,2,6,1,21,89,32,47,96,11,9,0};
    int s = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,s-1);
    cout<<"Elements in array are:"<<endl;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
