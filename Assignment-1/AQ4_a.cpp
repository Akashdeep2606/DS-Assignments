#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no. of elements:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // Reversing elements of array
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    cout << "Array after reversing its elements:";
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}