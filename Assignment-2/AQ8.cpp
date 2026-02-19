#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of elements:";
    cin >>n;
    int arr[n];
    cout << "Enter array elements:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){ flag=false; break;
        }
        }
    if(flag==true) count ++;
    }
    cout << "The total number of distinct elements in this array is " << count ;
    return 0;
    
} 