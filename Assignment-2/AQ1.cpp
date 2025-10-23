#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the no. of elements:";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    } 
    int low=0,high=n-1;
    int ele;
    cout << "Enter element to be searched:";
    cin >> ele;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==ele) {cout << ele << " found at position " << mid+1;
            break;
        }
        if(arr[mid]<ele) low=mid+1;
        if(arr[mid]>ele) high=mid-1;
    }
    if(low>high) cout << "Element not found";
    return 0;
} 