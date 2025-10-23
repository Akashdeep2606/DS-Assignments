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
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            count++;
        }
    }
cout << "The total number of inversions in this array is " << count ;
return 0;
} 