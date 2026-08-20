#include<iostream>
using namespace std;
void linear_search(int* arr, int size){
    int sum=0;
    int real_sum=1;
    for(int i=0;i<size;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" is missing"<<endl;
            return;
        }
    }
}
void binary_search(int* arr, int size, int start, int mid, int end){
    if(start>end){
        cout<<mid+1<<" is missing"<<endl;
        return;
    }
    mid=(start+end)/2;
    if(arr[mid]!=mid+1){
        end=mid-1;
        binary_search(arr, size, start, mid, end);
    }
    else if(arr[mid]==mid+1){
        start=mid+1;
        binary_search(arr, size, start, mid, end);
    }
}
int main(){
    int size;
    int* arr;
    cout<<"Enter the size of the array: ";
    cin>>size;
    arr=new int[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    linear_search(arr, size);
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    binary_search(arr, size, start, mid, end);
}