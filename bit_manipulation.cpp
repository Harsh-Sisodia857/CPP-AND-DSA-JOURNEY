#include<iostream>
using namespace std;
// int getBit(int n,int pos){
//     return ((n & (1<<pos)) != 0);
// }
// int setBit(int n,int pos){
//     return (n | (1<<pos));
// }
// int clear(int n,int pos){
//     int mask = 1 << pos;
//     mask = ~mask;
//     return (mask & n);
// }
// int update(int n,int pos,int value){
//     int mask = ~(n & (1<<pos));
//     mask = mask & n;
//     return (mask | (value<<pos));
    
// }
// int main(int argc, char const *argv[])
// {
// // get bit 
//     // cout<<getBit(5,3);
// // set bit 
//     // cout<<setBit(5,1);
//     return 0;
// }

// Finding a single unique number from a duplicate array of two
// int unique(int arr[],int n){
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     return xorsum;   
// }
// int main(int argc, char const *argv[])
// { 
//     int arr[5] = {1,2,2,4,1};
//     cout<<unique(arr,5);
//     return 0;
// }

// Finding two unique element from the duplicate array of two
int getBit(int num,int pos){
    return (num & (1<<pos) != 0);
}
int main(int argc, char const *argv[])
{
    int arr[8] = {1,2,3,4,7,3,2,1};
    int xorsum = 0,dupxorsum = 0,i,bit = 0,pos = 0;
    for(i = 0; i<8; i++ ){
        xorsum = xorsum ^ arr[i]; 
    }
    dupxorsum = xorsum;
    while(bit != 1){
        bit = (xorsum & 1);
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxorsum = 0;
    for(i = 0; i<8; i++ ){
        if(getBit(arr[i],pos-1)){
            newxorsum = newxorsum ^ arr[i];
        }
    }
    cout<<newxorsum<<endl;
    xorsum = dupxorsum ^ newxorsum;
    cout<<xorsum;

    return 0;
}

