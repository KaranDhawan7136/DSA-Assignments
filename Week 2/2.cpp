#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
int main(){
    int arr[50];
    int n;
    cout<<"Enter how many elements you want to add in array: ";
    cin>>n;
    cout<<"Enter the values of the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr, n);
    return 0;
}