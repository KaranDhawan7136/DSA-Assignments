#include<iostream>
using namespace std;
void linear_search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<arr[i]<<" found at the position "<<i+1<<endl;
            return;
        }
    }
    cout<<"Element not found in the array"<<endl;
}
void binary_search(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]==key){
            cout<<arr[mid]<<" found at position "<<mid+1<<endl;
            return;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    cout<<"Element not found in the array"<<endl;
}
int main(){
    int arr[50];
    int size;
    cout<<"Enter how many elements you want to add in array: ";
    cin>>size;
    cout<<"Enter the values of the elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value you want to search: ";
    cin>>key;

    int choose;
    cout<<"Choose from the following: "<<endl;
    cout<<"1. Linear Search"<<endl;
    cout<<"2. Binary Search"<<endl;
    cin>>choose;
    if(choose==1){
        linear_search(arr, size, key);
    }
    else if(choose==2){
        binary_search(arr, size, key);
    }
    else{
        cout<<"Entered number is invalid"<<endl;
    }
    return 0;
    
}