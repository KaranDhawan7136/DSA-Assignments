#include<iostream>
using namespace std;
void sort(int arr[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        temp=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
void distinct_elements(int arr[], int n){
    int count=1;
    for(int i=1; i<n; i++){
        if(arr[i-1]!=arr[i]){
            count++;
        }
    }
    cout<<"Total number of distinct elements are: "<<count<<endl;
}
int main(){
    int* arr;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    arr=new int[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr, size);
    distinct_elements(arr, size);
}