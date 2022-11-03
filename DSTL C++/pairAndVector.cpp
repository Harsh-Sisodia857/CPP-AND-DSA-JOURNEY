#include<iostream>
#include<vector>
using namespace std;
void printvec(vector <int> v){
    cout<<"vector is : "<<endl;
    for(int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    pair<int, string> p;
    // initialization
    // p = make_pair(2,"abc");
    p = {2,"Harsh"};

    // copy a pair
    // pair<int, string> p1 = p;
    // p1.first = 5;
    // cout<< p.first << " " << p.second << endl;

    // pair<int,int> p_arr[3];
    // p_arr[0] = {1,2};
    // p_arr[1] = {2,3};
    // p_arr[2] = {3,4};
    // similar way to input a value for pair from user
    // for(int i = 0; i<3; i++)
    //     cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;

    //vector
   // initialization --> also provide initial value {vector <int> v(size) and value is 0} else initially size of vector is 0
    vector<int> v;
    // vector<int> v(size,item) --> vector<int> v(7,3) output : 3 3 3 3 3 3 3
    cout<<v.size();
    // int n;
    // cout<<"Enter the size of vector: ";
    // cin>>n;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // printvec(v);
    return 0;
}
