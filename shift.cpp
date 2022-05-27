#include<iostream>
using namespace std;

// Odd  or even 

// int main(int argc, char const *argv[])
// {
//     int x;
//     cin>>x;
//     int bit = 1<<0;
//     int lastbit = (bit & x);
//     if(lastbit == 0)
//         cout<<"number is even";
//     else 
//         cout<<"number is odd";
//     return 0;
// }

// Getting bit

// int main(int argc, char const *argv[])
// {
//     int x,pos;
//     cin>>x>>pos;
//     int bit = 1<<pos;
//     if ((bit & x) == 0)
//          cout<<"0 is the bit at position "<<pos;
//     else
//         cout<<"1 is the bit at position "<<pos;
//     return 0;
// }

// Setting bit

// int main(int argc, char const *argv[])
// {
//     int x,pos;
//     cin>>x>>pos;
//     int bit = 1<<pos;
//     x = (x | bit);
//     cout<<x;
//     return 0;
// }

// Clear bit

// int main(int argc, char const *argv[])
// {
//     int x,pos;
//     cin>>x>>pos;
//     int bit = (1<<pos);
//     int neg_bit = ~(bit);
//     x = (x & neg_bit);
//     cout<<x;
//     return 0;
// }

// Update bit

// int main(int argc, char const *argv[])
// {
//     int x,pos,value;
//     cin>>x>>pos>>value;
//     int bit = (1<<pos);
//     int complement = ~(bit);
//     x = (complement & x);
//     int set = (x | (value<<pos));
//     cout<<set;
//     return 0;
// }
