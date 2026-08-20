#include<iostream>
using namespace std;

void diagonal_matrix(int* a, int r1, int c1){
    cout<<"Enter the diagonal elements of the matrix: ";
    for(int i=0;i<r1;i++){
        cin>>a[i];
    }
    cout<<"Elements of the matrix are: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i==j){
                cout<<a[i]<<" ";
            }
            else{

                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
void tri_diagonal_matrix(int* a, int r1, int c1){
    int size=r1+c1+(r1+2-1)/2;
    cout<<"Enter the tri-diagonal elements of the matrix: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Elements of the matrix are: "<<endl;
    int temp=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i==j || i+1==j || i==j+1){
                cout<<a[temp]<<" ";
                temp++;
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
void lower_triangular_matrix(int* a, int r1, int c1){
    int size;
    cout<<"Enter the tri-diagonal elements of the matrix: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}
int main(){
    int* a=nullptr;
    int r1, c1;
    cout<<"Enter the rows and columns of matrix: ";
    cin>>r1>>c1;
    if(r1==c1){
        a=new int[r1];
        // diagonal_matrix(a, r1, c1);
        tri_diagonal_matrix(a, r1, c1);
    }
    else{
        cout<<"Rows and columns are different diagonal matrix not possible."<<endl;
    }
    


    return 0;
}