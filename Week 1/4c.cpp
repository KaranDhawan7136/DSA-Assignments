#include<iostream>
using namespace std;
int main(){
    int a[40][40], trans[40][40];
    int r,c;
    cout<<"Enter number of rows and columns of the matrix: ";
    cin>>r>>c;
    cout<<"Enter elements of the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            trans[j][i]=a[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}