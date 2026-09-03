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
    int size=3*r1-2;
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
    int size=(r1*(r1+1))/2;
    cout<<"Enter the lower triangular elements of the matrix: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i>=j){
                cout<<a[temp]<<" ";
                temp++;
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
void upper_triangular_matrix(int* a, int r1, int c1){
    int size=(r1*(r1+1))/2;
    cout<<"Enter the upper triangular elements of the matrix: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i<=j){
                cout<<a[temp]<<" ";
                temp++;
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
void symmetric_matrix(int* a, int r1, int c1){
    int size=(r1*(r1+1))/2;
    cout<<"Enter the symmetric elements of the matrix: ";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            if(i <= j)
            {
                int index = i * r1 - (i * (i - 1)) / 2 + (j - i);
                cout << a[index] << " ";
            }
            else
            {
                int index = j * r1 - (j * (j - 1)) / 2 + (i - j);
                cout << a[index] << " ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int* a=nullptr;
    int r1, c1;
    int choice;
    cout<<"Choose from the following: "<<endl;
    cout<<"1. Diagonal matrix"<<endl;
    cout<<"2. Tri-Diagonal matrix"<<endl;
    cout<<"3. Lower Triangular matrix"<<endl;
    cout<<"4. Upper Triangular matrix"<<endl;
    cout<<"5. Symmetric matrix"<<endl;
    cin>>choice;
    
    cout<<"Enter the rows and columns of matrix: ";
    cin>>r1>>c1;
    if(r1==c1){
        int size = r1*r1;
        a=new int[size];
        diagonal_matrix(a, r1, c1);
        tri_diagonal_matrix(a, r1, c1);
        lower_triangular_matrix(a, r1, c1);
        upper_triangular_matrix(a, r1, c1);
        symmetric_matrix(a, r1, c1);
    }
    else{
        cout<<"Rows and columns are different square matrix representations are not possible."<<endl;
    }
    return 0;
}