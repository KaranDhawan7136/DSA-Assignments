#include<iostream>
using namespace std;
int* stack;
int size;
int n=-1;
bool isEmpty(){
    if(n==-1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(n==size-1){
        return true;
    }
    else{
        return false;
    }
}
void push(){
    if(isFull){
        cout<<"Stack is full"<<endl;
    }
    else{
        if(n==-1){
            n=0;
        }
        int val;
        cout<<"Enter the value you want to push: ";
        cin>>val;
        stack[n]==val;
        n++;

    }
    
}
void pop(){
    if(isEmpty){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        n--;
        if(n==0){
            n=-1;
        }
    }
}

void display(){
    cout<<"Elements of the stack are: "<<endl;
    int temp=n;
    for(int i=temp;i>0;i--){
        cout<<stack[i]<<endl;
    }
}
void peek(){
    cout<<"Peek element is: "<<stack[n];
    
}
int main(){
    cout<<"Enter the size of the stack: ";
    cin>>size;
    stack=new int[size];
    int choice;
    while(true){
        cout<<"Choose from the following: "<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"6. Peek"<<endl;
        cout<<"7. Exit"<<endl;
        cin>>choice;
        int temp;
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                isEmpty();
                break;
            case 4:
                isFull();
                break;
            case 5:
                display();
                break;
            case 6:
                peek();
                break;
            case 7:
                return 0;
            default:
                cout<<"Enter a valid number"<<endl;
        }
    }
    



}