#include<iostream>
using namespace std;

int catalan(int n){
    if(n <= 1)
        return 1;
    int res = 0;
    for(int i = 0; i <= n-1; i++){
        res += (catalan(i)*catalan(n-i-1));
    }
    return res;
}

int main(int argc, char const *argv[])
{
    // PRINTING CATALAN FROM 1 TO 10
    for(int i = 1; i < 11; i++){
        cout<<catalan(i)<<endl;
    }
    return 0;
}
