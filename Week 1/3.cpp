#include<iostream>
using namespace std;
void right_rotate(int a[], int capacity, int rot){

    for(int i=0;i<rot;i++){
        int last= a[capacity-1];
        for(int j=capacity-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=last;
    }
    cout<<"Elements after right rotation are:"<<endl;
    for(int i=0;i<capacity;i++){
        cout<<a[i];
    }
    
    
}
void left_rotate(int a[], int capacity, int rot){
    for(int i=0;i<rot;i++){
        int first=a[0];
        for(int j=0;j<capacity;j++){
            a[j]=a[j+1];
        }
        a[capacity-1]=first;
    }
    cout<<"\nElements after left rotation are:"<<endl;
    for(int i=0;i<capacity;i++){
        cout<<a[i];
    }
}
int main(){
    int size;
    int capacity;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int* a=new int[size];
    cout<<"Enter the capacity of the array: ";
    cin>>capacity;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<capacity;i++){
        cin>>a[i];
    }
    int rot;
    cout<<"Enter the no. of elements you want to rotate: ";
    cin>>rot;
    right_rotate(a,capacity,rot);
    left_rotate(a,capacity,rot);
    return 0;
}