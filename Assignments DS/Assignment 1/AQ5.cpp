#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter no. of rows and columns:";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter elements of array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    // sum of every row
    int sum;
    for(int i=0;i<n;i++){
     sum=0;
        for(int j=0;j<m;j++){
          sum+=arr[i][j];
        }
    cout << "Sum of row " << i+1 << " is " << sum<<endl;;
   }
   // sum of every column
   for(int j=0;j<m;j++){
    sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][j];
    }
    cout << "Sum of column "<< j+1 << "is " << sum << endl;
   }
    return 0;
}