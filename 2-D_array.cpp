// Printing matrix

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n,m,i,j;
//     cout<<"Enter number of rows and columns:"<<endl;
//     cin>>n>>m;
//     int arr[n][m];
//     cout<<"Enter "<<n*m<<" elements"<<endl;
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//         cout<<endl;
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             cout<<arr[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// transpose of a matrix

// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,temp;
//     int arr[3][3] = {{2,4,3},{7,53,1},{1,0,13}};
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     cout<<endl<<"Transpose of matrix is:"<<endl;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(i>j){
//            temp = arr[i][j];
//            arr[i][j] = arr[j][i];
//            arr[j][i] = temp;
//             }
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             cout<<arr[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {   
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int arr1[n1][n2],arr2[n2][n3],i,j;
//     cout<<"Enter First Matrix:"<<endl;
//      for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             cin>>arr1[i][j];
//         }
//     }
//     cout<<"First matrix is:"<<endl;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n2;j++){
//             cout<<arr1[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     cout<<"Enter Second Matrix:"<<endl;
//      for(i=0;i<n2;i++){
//         for(j=0;j<n3;j++){
//             cin>>arr2[i][j];
//         }
//     }
//     cout<<"Second matrix is:"<<endl;
//      for(i=0;i<n2;i++){
//         for(j=0;j<n3;j++){
//             cout<<arr2[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     int ans[n1][n3];
//     for(i=0;i<n1;i++){
//         for(j=0;j<n3;j++){
//             ans[i][j]=0;
//         }
//     }

//     cout<<"Multiplication of matrix is:"<<endl;
//     for(i=0;i<n1;i++){
//         for(j=0;j<n3;j++){
//             for(int k=0;k<n2;k++)
//                 ans[i][j] += arr1[i][k]*arr2[k][j];
//         }
//     }
//      for(i=0;i<n1;i++){
//         for(j=0;j<n3;j++){
//             cout<<ans[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Searching in array 

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n,m,i,j,target;
//     bool flag=false;
//     cin>>n>>m;
//     int arr[n][m];
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Enter element to be found:"<<endl;
//     cin>>target;
//     int c=m-1,r=0;
//     while(r<n && c>0){
//         if(arr[r][c] == target)
//             flag = true;
//         if(arr[r][c] > target)
//             c--;
//         else
//             r++;
//     }
//     if(flag)
//       cout<<"Element is found";
//     else
//       cout<<"Element is not found";
//     return 0;
// }
