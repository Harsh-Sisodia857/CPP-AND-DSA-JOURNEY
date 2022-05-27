// prime number

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n,i;
//     cin>>n;
//     int count=0;
//     for(i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//           cout<<"Number is not prime";
//           count = 1;
//           break;
//         }
         
//     }
//     if(count != 1)
//         cout<<"Number is prime";
//     return 0;
// }

// Fibonacci series

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int t1=0,t2=1,nextterm;
//     for(int i=0;i<n;i++){
//         cout<<t1<<" ";
//         nextterm = t1 + t2;
//         t1 = t2;
//         t2 = nextterm;
//     }
//     return 0;
// }

// If we have been asked to find out Fib(8) or Fib(2)

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n,flag=1;
//     cout<<"Enter the number of which you have to find the fibonacci series"<<endl;
//     cin>>n;
//     int t1=0,t2=1,nextterm;
//     while(flag<n){
//         nextterm = t1 + t2;
//         t1 = t2;
//         t2 = nextterm;
//         flag++;
//     }
//     cout<<t1;
//     return 0;
// }

// Reversing a number

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//      int reverse=0;
//     while(n!=0){
//         int rm = n%10;
//         reverse = reverse*10 + rm;
//         n = n/10;
//     }
//     cout<<reverse;
//     return 0;
// }

// Factorial of a number

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n,fact=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         fact *= i;
//     }
//     cout<<fact;
//     return 0;
// }

// Armstrong number
// #include<iostream>
// #include<math.h>
// using namespace std;
// int dig(int n){
//      int dn = n,digit=0;
//     while(dn>0){
//         digit++;
//         dn = dn/10;
//     }
//     return digit;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     int dn = n,digit=0,sum=0;
//     digit = dig(n);
//     while(dn>0){
//        int rm = dn%10;
//         sum += pow(rm,digit);
//         dn /= 10;
//     }
//     if(sum == n)
//        cout<<"Number is Armstrong";
//     else
//        cout<<"Number is not Armstrong";
//     return 0;
// }

// Sum of digits 

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//      int sum = 0;
//     while(n>0){
//        int rm = n%10;
//        sum += rm; 
//        n = n/10;       
//     }
//     cout<<sum;
//     return 0;
// }



