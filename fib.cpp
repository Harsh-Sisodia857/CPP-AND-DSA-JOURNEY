#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int t1 = 0;
    int t2 = 1;
    for(int i=0;i<n;i++){
        cout<<t1<<endl;
        int next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    return 0;
}
