#include<iostream>
using namespace std;
void reverse(int a[], int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    cout<<"After reverse: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int size, capacity;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the capacity of the array: ";
    cin>>capacity;
    int* a=new int[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<capacity;i++){
        cin>>a[i];
    }
    reverse(a, capacity);
}