#include<iostream>
using namespace std;
int size;
int capacity;
int* arr=nullptr;
void remove_duplicates(){
    int index=0;
    bool duplicate=false;
    for(int i=0;i<capacity;i++){
        for(int j=0;j<index;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            arr[index]=arr[i];
            index++;
        }
    }
    capacity=index;
}
void display(){
    cout<<"Elements after duplication are:"<<endl;
    for(int i=0;i<capacity;i++){
        cout<<arr[i];
    }
}
int main(){
    
    cout<<"Enter the size of the array: ";
    cin>>size;

    arr=new int[size];

    cout<<"Enter the capacity of the array: ";
    cin>>capacity;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<capacity;i++){
        cin>>arr[i];
    }
    remove_duplicates();
    display();

    delete[] arr;
}