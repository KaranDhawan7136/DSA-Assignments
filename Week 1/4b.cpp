#include<iostream>
using namespace std;
int main(){
    int a[40][40], b[40][40], res[40][40];
    int r1, c1, r2, c2;
    cout<<"Enter the number of rows and columns for the A matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the number of rows and columns for the B matrix: ";
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"Multiplication not possible"<<endl;
        return 0;
    }
    cout<<"Enter the elements of A matrix: ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of B matrix: ";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<r2;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"After Multiplication: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}