#include<iostream>
using namespace std;
void inversion(int arr[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i<j && arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<"Total number of inversion elements are: "<<count<<endl;
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
    inversion(arr, size);
}