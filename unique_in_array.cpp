#include<iostream>
using namespace std;

// Only one element is unique 

// int main(int argc, char const *argv[])
// {
//     int arr[] = {1,2,3,4,3,2,1};
//     int xor_sum = 0;
//     for(int i=0;i<7;i++){
//         xor_sum = xor_sum ^ arr[i];
//     }
//     cout<<xor_sum;
//     return 0;
// }

// Two element are unique in an array 

// bool getBit(int n,int pos){
//     return ((n & (1<<pos)) != 0);
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {2,4,5,6,7,5,2,4};
//     int xor_sum = 0,dup_xor;
//     for(int i=0;i<8;i++){
//         xor_sum = (xor_sum ^ arr[i]);
//     }
//     dup_xor = xor_sum;
//     int bit = 0,pos=0;
//     while(bit != 1){
//         bit = (xor_sum & 1);
//         xor_sum = (xor_sum >> 1);
//         pos++;
//     }
//     int temp_xor = 0;
//     for(int i=0;i<8;i++){
//         if(getBit(arr[i],pos-1)){
//             temp_xor = (temp_xor ^ arr[i]);
//         }
//     }
//     cout<<temp_xor<<endl;
//     cout<<(dup_xor ^ temp_xor)<<endl;
//     return 0;
// }

// finding out a unique number in an array having duplicate thrice times 
bool getBit(int n,int pos){
     return ((n & (1<<pos)) != 0);
}
bool setBit(int n,int pos){
     return ((n | (1<<pos)));
}
int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,2,3,2,1,3,1};
    int repeted[10]; int i,j,result = 0;
    for(i=0;i<10;i++){
        int sum = 0;
        for(j=0;j<10;j++){
            if(getBit(arr[j],i))
                sum++;
        }
        if(sum % 3 != 0)
             result = setBit(result,i);
    }
    cout<<result<<endl;
    return 0;
}

