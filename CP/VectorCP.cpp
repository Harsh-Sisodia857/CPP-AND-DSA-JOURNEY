#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main() {
//     int n,q;
//     cin>>n>>q;
//     vector<int> arr;
//     vector<pair<int,int>> query;
//     for(int i = 0; i<n; i++){
//         int size;
//         cin>>size;
//         for(int j = 0; j<size;j++){
//             int val;
//             cin>>val;
//             arr.push_back(val);
//         }
//     }
//     vector<int>::iterator it;
//     for(it = arr.begin();it != arr.end();it++){
//         cout<<*it<<endl;
//     }
    

//     // for(int it = 0; it < q ; it++){
//     //     int index,value;
//     //     cin>>index>>value;
//     //     query[it] = make_pair(index,value);    
//     //     }
//     // for(int i = 0; i<n; i++){
//     //     int ind = query[i].first;
//     //     int val = query[i].second;
//     // for(auto it = arr[i].begin(); it != arr[i].end(); it++){
//     //     int ans1 = arr[ind][val];
//     //     cout<<ans1<<endl;
//     // }
//     // }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int n,q;
    cin>>n>>q;
    vector<int> arr[n];
    vector<pair<int,int>> query;
    for(int i = 0; i<n; i++){
        int size;
        cin>>size;
        for(int j = 0; j<size;j++){
            int val;
            cin>>val;
            arr[i].push_back(val);
        }
    }

    // Printing the elements
    // for(int i = 0; i<n; i++){
    //     for(auto it = arr[i].begin(); it != arr[i].end(); it++){
    //         cout<<*it<<" ";
    //     }
    // }
    cout<<q<<endl;
    int count = 0;
    for(int it = 0; it < q ; it++){
        count++;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        int index,value;
        cin>>index;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin>>value;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        query[it] = make_pair(index,value);
        }
    cout<<count;
    return 0;
}
