#include<iostream>
using namespace std;
void linear_search(int* arr, int size){
    for(int i=1;i<=size;i++){
        if(arr[i]!=i){
            cout<<"Missing element is "<<i<<endl;
        }
    }
}
void binary_search(int* arr, int size){
    
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

}