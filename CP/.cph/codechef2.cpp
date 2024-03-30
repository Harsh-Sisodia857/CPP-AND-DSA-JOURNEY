#include <bits/stdc++.h>
#define N 1000000007
using namespace std;

int main()
{
    // your code goes here
    
    int t;   
    cin >> t;
    while (t--)
    {
        long long numberOfVertex, n_source, n_sink;
        long long ans = 0;
        cin >> numberOfVertex >> n_source >> n_sink;
        if(n_sink + n_source <= numberOfVertex){
            long long temp = numberOfVertex - (n_sink + n_source);
            ans += n_source * (temp + n_sink);
            ans += (temp * n_sink);
            ans += (temp * (temp - 1)) / 2;
        }
        else{
            long long temp =(n_sink + n_source) - numberOfVertex;
            n_sink = n_sink - temp;
            n_source = n_source - temp;
            temp = 0;
            ans += n_source * (temp + n_sink);
            ans += (temp * n_sink);
            ans += (temp * (temp + 1)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
