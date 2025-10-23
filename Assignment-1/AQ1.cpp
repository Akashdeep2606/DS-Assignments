#include<iostream>
using namespace std;
#define MAX 100
int arr[MAX];                                                   
int main(){  
    int n;
    
    do{
    cout << "Enter the number of operation you want to perform" << endl;
    cout << "1.Create"<< endl << "2.Display"<< endl << "3.Insert" << endl << "4.Delete" << endl << "5.Linear Search" <<endl<< "6.Exit"<<endl; 
    cin >> n;
    switch(n){
        case 1:                                     
        int x;
        cout<<"Enter the number of elements:"<< endl; 
        cin >> x; 
        for(int i=0;i<x;i++){
            cin >> arr[i];
        }
        break;

        case 2:
        cout << "Array elements:";
        for(int i=0;i<x;i++){
            cout << arr[i] << " "; 
        } 
        break;

        case 3:
        int pos,val;
        cout << "Enter position and value to insert:"<<endl;
        cin >> pos>>val;
        for(int i=x;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=val;
        x++;
        break;

        case 4:
        int pos2;
        cout << "Enter position to delete"<< endl;
        cin >> pos2;
        for(int i=pos2;i<x-1;i++){
            arr[i]=arr[i+1];
        }
    x--;
    break;
        
       case 5:{
       int ele,found=0;
       cout << "Enter element to search:"<<endl;
       cin >> ele;
       for(int i=0;i<x;i++){
        if(arr[i]==ele){
            cout << "Element found at position " << i+1 << endl;
            found=1;
        }
       }
       if(found==0) cout<< "Element not found"<<endl;
        break;
       } 
        case 6:
        cout<<"Exiting."<<endl;
        break;
        default:
    cout<<"Invalid number."<<endl; 
    }
}while(n!=6);
return 0;
}