#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main(int argc, char const *argv[])
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // Method 1 : iterating to vector

    // for(int i = 0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

    // Method 2 : iterating to vector

    // vector<int>::iterator it;
    // for(it = v.begin();it != v.end();it++){
    //     cout<<*it<<endl;
    // }

    // Method 3 : iterating to vector

    // for(auto element:v){
    //     cout<<element<<endl;
    // }

    // end element is poped out
    // v.pop_back();

    // vector<int> v2 (size,number) ---> 50 50 50 in below case
    //  vector<int> v2 (3,50);

    // Swapping two vectors v and v2
    // swap(v,v2);

    // for(auto element:v){
    //     cout<<element<<endl;
    // }

    // for(auto element:v2){
    //     cout<<element<<endl;
    // }

    // sorting the vector
    // sort(v.begin(),v.end());

    // Pairing of vector
    // pair<int,char> p;
    // p.first = 3;
    // p.second = 'f';

    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        pair<int, int> p;
        p.first = arr[i];
        p.second = i;
        v.push_back(p);
        // v.push_back(make_pair(arr[i],i))
    }
    // We can also write our own comparator function and pass it as a third parameter. This “comparator” function returns a value; convertible to bool, which basically tells us whether the passed “first” argument should be placed before the passed “second” argument or not.
    // For eg: In the code below, suppose intervals {6,8} and {1,9} are passed as arguments in the “compareInterval” function(comparator function). Now as i1.first (=6) < i2.first (=1), so our function returns “false”, which tells us that “first” argument should not be placed before “second” argument and so sorting will be done in order like {1,9} first and then {6,8} as next.
    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }


//PAIR IN C++
    // pair<int,int> p(32,31);
    // p.first = 32;
    // p.second = 30;

    // p = make_pair(10,20);
    // p = {3,6};
    // cout<<p.first<<endl<<p.second;

    return 0;
}
