#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the no. of elements:";
    cin>>n;
    int arr[n];
     cout << "Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j+1;k<n;k++){
                    arr[k-1]=arr[k];
                }
            n--;
            j--;
            }
        }
    } 
cout << "Array after removing duplicate elements is:"<<endl;
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
} 