#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char arr[] = "Hey Guys this is Harsh and i am learning c++";
    int i,chr=0,max_char= INT_MIN;
    for(i=0;i !='\0';i++){
        if(arr[i] != ' '){
         chr++;
        }
        cout<<"Haar";
        if(max_char < chr){
            max_char = chr;
        }
        if(arr[i] == ' '){
            chr=0;
        } 
    }
    cout<<"Maximum length is "<<max_char<<endl<<chr;
    return 0;
}
