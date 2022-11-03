#include<iostream>
#include<set>
using namespace std;
void subset(char arr[],int size){
    for(int i = 0; i<(1<<size);i++){
        for(int j = 0; j < size; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
            cout<<endl;
    }
}
int main(int argc, char const *argv[])
{
    char a[] = {'a','b'};
    subset(a,2);    
    return 0;
}
