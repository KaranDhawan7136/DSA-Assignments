#include<iostream>
using namespace std;
int main(){
    int a[40][40];
    int r,c;
    cout<<"Enter number of rows and columns of the matrix: ";
    cin>>r>>c;
    cout<<"Enter elements of the matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    int row, column;
    for(int i=0;i<r;i++){
        row=0;
        for(int j=0;j<c;j++){
            row+=a[i][j];
        }
        cout<<"Addition of row "<<i+1<<" = "<<row<<endl;
    }
    for(int i=0;i<r;i++){
        column=0;
        for(int j=0;j<c;j++){
            column+=a[j][i];
        }
        cout<<"Addition of column "<<i+1<<" = "<<column<<endl;
    }
    
}