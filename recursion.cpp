// Reversing the string 

#include<iostream>
using namespace std;
// void reverse(string s){
//       if(s.length() == 0)
//               return;
//       else{
//           string ros = s.substr(1);
//           reverse(ros);
//           cout<<s[0];
//       }
// }
// int main(){
//     string s = "Harsh";
//     reverse(s);
//     return 0;
// }

// Replacing some characters of string 

// #include<iostream>
// using namespace std;

// void replacepi(string s){
//     if(s.length()== 0)
//               return;
//     else if(s[0]=='p' && s[1] =='i'){
//               cout<<3.14;
//               replacepi(s.substr(2));
//          }
//     else{
//         cout<<s[0];
//         replacepi(s.substr(1));
//     }
// }
// int main(){
//     string s = "pippipppiipi";
//     replacepi(s);
// }

// Tower Of Hanoi 

// #include<iostream>
// using namespace std;
// void TOH(int n,char src,char des,char helper){
//     if(n==0)
//         return;
//     TOH(n-1,src,helper,des);
//     cout<<"Move from "<<src<<"to "<<des<<endl;
//     TOH(n-1,helper,des,src);
// }
// int main(){
//     TOH(3,'A','C','B');
//     return 0;
// }

// Removing Duplicate character

// #include<iostream>
// using namespace std;
// string removeDup(string s){
//     if(s.length()==0)
//          return "";
//     char sf= s[0];
//     string rs = removeDup(s.substr(1));
//     int n=0;
//     while(s.length() != n){
//           if(s[0] == rs[n])
//                 return rs;
//           n++;
//     }
//          return sf + rs;
// }
// int main(){
//     string s = removeDup("aaabbbbcccdddaaa");
//     cout<<s;
//     return 0;
// }

// Taking all 'x' character to the end 

// #include<iostream>
// using namespace std;
// string xte(string s){
//     if(s.length()==0){
//         return "";
//     }
//    char ch = s[0];
//    string str = xte(s.substr(1));
//     if(ch == 'x')
//        return str+ch;
//     else
//         return ch+str;
// }
// int main(){
//     string str = xte("xtrndwxxxtjmdv");
//     cout<<str;
//     return 0;
// }

// sum till n 

// int sum(int n){
//     if(n==1)
//         return 1;
//     return n + sum(n-1);
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }

// printing number till n 

// void inc(int n){
//     if(n==1)
//        cout<<"1"<<endl;
//     else{
//     inc(n-1);
//     cout<<n<<endl;
// }
//     }
    
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     inc(n);
//     return 0;
// }

// printing in reverse order till n 

// void reverse(int n){
//     if(n==0)
//        return;
//     cout<<n<<endl;
//     reverse(n-1);
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     reverse(n);
//     return 0;
// }

// fibonacci series using recursion 

// int Fib(int n){
//     if(n==0 | n==1)
//         return n;
//     return (Fib(n-1) + Fib(n-2));
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     cout<<Fib(n)<<endl;
//     return 0;
// }

// Factorial 

// int fact(int n){
//     if(n==1 | n==0)
//          return 1;
//     return (n * fact(n-1));   
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }

// To calculate n^p using Recursion

// int exp(int n,int p){
//     if(p==0)
//         return 1;
//     return n* exp(n,p-1);
// }
// int main(int argc, char const *argv[])
// {
//     int n,p;
//     cin>>n>>p;    
//     cout<<exp(n,p)<<endl;
//     return 0;
// }

// permutation of a string 

// void permutation(string s,string ans){
//     if(s.length() == 0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char fix = s[i];
//         string ros = s.substr(0,i) + s.substr(i+1);
//         permutation(ros,ans+fix);
//     }
// }
// int main(int argc, char const *argv[])
// {
//     string s;
//     cin>>s;
//     permutation(s,"");
//     return 0;
// }
