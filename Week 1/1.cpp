#include<iostream>
using namespace std;
int size;
int* a=nullptr;
int capacity;
void create(){
    cout<<"Enter the size of the array: ";
    cin>>size;
    a=new int[size];
    cout<<"Enter the capacity of the array: ";
    cin>>capacity;
    cout<<"Enter the values of the elements"<<endl;
    for(int i=0;i<capacity;i++){
        cin>>a[i];
    }
}
void display(){
    cout<<"Elements of the array are: "<<endl;
    for(int i=0;i<capacity;i++){
        cout<<a[i]<<endl;
    }
}
void insert(){
    int pos;
    int n;
    cout<<"Enter the position where you want to insert the element: ";
    cin>>pos;
    cout<<"Enter the value of the element you want to insert: ";
    cin>>n;
    
    int temp, temp1;
    temp=a[pos-1];
    a[pos-1]=n;

    capacity+= 1;
    for(int i=pos;i<capacity;i++){
        temp1=a[i];
        a[i]=temp;
        temp=temp1;
    }
}
void del(){
    int val;
    int pos;
    cout<<"Enter the element you want to delete: ";
    cin>>val;
    for(int i=0;i<capacity;i++){
        if(a[i]==val){
            pos = i;
        }
    }
    capacity-=1;
    for(int i=pos;i<capacity;i++){
        a[i]=a[i+1];
    }
}
void linear_search(){
    int search;
    cout<<"Enter the value you want to search: ";
    cin>>search;
    for(int i=0;i<capacity;i++){
        if(a[i]==search){
            cout<<search<<" found at position "<<i+1<<endl;
        }
    }
}
int main(){
    int choice;
    while (true)
    {
        cout<<"Enter your choice: "<<endl;
        cout<<"1. Create"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Insert"<<endl;
        cout<<"4. Delete"<<endl;
        cout<<"5. Linear Search"<<endl;
        cout<<"6. Exit"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            del();
            break;
        case 5:
            linear_search();
            break;
        case 6:
            return 0;
            break;
        default:
            cout<<"Enter a valid option number."<<endl;
            break;
        } 
    }
    delete[] a;
    return 0;
}