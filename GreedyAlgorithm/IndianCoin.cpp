#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int n; cin>>n;
    vector<int> denomination(n);
    for(int i = 0; i < n; i++)
    {
        cin>>denomination[i];
    }
    int x; cin>>x;
    sort(denomination.begin(),denomination.end(),greater<int>());
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += x/denomination[i];
        x -= x/denomination[i] * denomination[i];       
    }
    cout<<ans<<endl;
    return 0;
}
