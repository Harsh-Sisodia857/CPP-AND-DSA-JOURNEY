
int main(int argc, char const *argv[])
{
    int i,j,row;
    cin>>row;

    for(i=0;i<=row;i++){
        for(j=0;j<=i;j++){
            cout<<fact(i)/fact(j)*fact(i-j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
