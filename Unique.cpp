#include<iostream>
using namespace std;
int getBit(int n,int pos){
    return ((n & (1<<pos)) != 0);
}
int main(int argc, char const *argv[])
{
    // 1) a unique element in an array 
    // int arr[] = {4,5,6,1,4,5,6};
    // int xorsum = 0;
    // for(int i = 0 ; i < 7; i++){
    //     xorsum = xorsum ^ arr[i];
    // }   
    // cout<<xorsum;

    // 2) two unique element in an array 
    int arr[] = {4,5,6,3,1,5,6,4};
    int xorsum = 0,dup_xor;
    for(int i = 0 ; i < 8; i++){
        xorsum = xorsum ^ arr[i];
    }
    dup_xor = xorsum;
    int bit = 0,pos = 0;
    while(bit != 1){
        bit = xorsum & 1;
        xorsum = xorsum >> 1;
        pos++;
    }
    int xorarray = 0;
    for(int i = 0; i<8; i++){
        if(getBit(arr[i],pos-1)){
            xorarray = (xorarray ^ arr[i]);
        }
    }
    cout<<xorarray<<endl;
    cout<< (dup_xor ^ xorarray);

    return 0;
}
