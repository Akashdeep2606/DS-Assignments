#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter rows and columns of array:";
    cin >> n >> m ;
    int arr[n][m];
    cout << "Enter elements of array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        } 
    }
    //Transpose
    int t[m][n];   // can do it in same matrix but it is valid only for square matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           t[j][i]=arr[i][j];
    }
    }
    cout << "Array after transpose:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << t[i][j]<<" ";
        }
    cout << endl;
    }
    return 0;
}
