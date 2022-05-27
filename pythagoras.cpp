#include<iostream>
using namespace std;
void pythagorus(int max,int a,int b){
    if( max * max == a*a + b*b)
       printf("Theorum Verified");
}
int main(){
    int a,b,c,maximum;
    cin>>a>>b>>c;
    if(a > b && a>c)
       pythagorus(a,b,c);
    if(b > a && b > c)
       pythagorus(b,a,c);
    if(c>a && c>b)
       pythagorus(c,a,b);
    else
       cout<<"Theorum is not applicable"<<endl;
return 0;

}