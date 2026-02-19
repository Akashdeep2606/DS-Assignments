#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter no. of rows and columns of first array";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter elements of first array:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
     int p,q;
    cout << "Enter no. of rows and columns of second array";
    cin >> p >> q;
    int brr[p][q];
    cout << "Enter elements of second array:";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin >> brr[i][j];
        }
    }
    // Multiplication
    int res[n][q];
    if(m!=p) cout << "Multiplication not possible!";
    int k=m;
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<m;k++){
                res[i][j]+= arr[i][k]*brr[k][j];
            }
        }
    }
    cout << "Product of matrices is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout << res[i][j] << " ";
        }
    cout <<endl;
    }
    return 0;
}