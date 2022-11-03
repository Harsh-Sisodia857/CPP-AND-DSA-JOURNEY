#include<iostream>
#include<map>
#include<unordered_map>
#define loop(i,a,b) for(int i = a; i < b; i++)
#define vi vector<int>
#define pi pair<int,int>
using namespace std;

// Using map
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1,3,4,1,4,2,1,3};
//     map<int,int> m;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     map<int,int> :: iterator it;
//     loop(i,0,size){
//         m[arr[i]]++;
//     }
//     for(it = m.begin(); it != m.end(); it++)
//     {
//         cout<<it->first<<" "<<it->second<<endl;
//     }
//     return 0;
// }


// Using unordered map
int main(int argc, char const *argv[])
{
    int arr[] = {1,3,4,1,4,2,1,3};
    unordered_map<int,int> m;
    int size = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> :: iterator it;
    loop(i,0,size){
        m[arr[i]]++;
    }
    for(it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
