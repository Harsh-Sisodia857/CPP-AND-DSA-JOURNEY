#include<bits/stdc++.h>
using namespace std;
// 0 1 1 2 3 5 8
// int fib(int n){
//     if (n == 2 || n == 1){
//         return n;
//     }
//     else{
//         return fib(n - 1) + fib(n - 2);
//     }
// }
// int main()
//   {
//       int n;
//       cin >> n;
//       cout<<fib(n);
//       return 0;
//   }

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 1; i <= n; i++){
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
        return 0;
}
