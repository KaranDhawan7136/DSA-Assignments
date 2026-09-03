#include<iostream>
using namespace std;
class Triplet{
    public:
    int row;
    int col;
    int value;    
};
void triplet_display(Triplet* t, int size){
    for(int i=0;i<size;i++){
        cout<<t[i].row<<" | "<<t[i].col<<" | "<<t[i].value<<endl;
    }
}

void transpose(Triplet* t, int size){
    int temp;
    for(int i=1;i<size;i++){
        temp=t[i].row;
        t[i].row=t[i].col;
        t[i].col=temp;
    }
    triplet_display(t, size);
}
void addition(Triplet* t, int size, Triplet* t1, int size1){
    Triplet* t2=new Triplet[size+size1];
    int size2=size+size1;
    t2[0].row=t1[0].row;
    t2[0].col=t1[0].col;
    int i=1;
    for(;i<size;i++){
        t2[i]=t[i];
    }
    for(int k=1;k<size1;k++){
        int flag=0;
        for(int j=1;j<i;j++){
            if(t2[j].row==t1[k].row && t2[j].col==t1[k].col){
                t2[j].value+=t1[k].value;
                flag=1;
                break;
            }
        }
        if(flag==0){
            t2[i++]=t1[k];
        }
    }
    t2[0].value=i-1;
    triplet_display(t2, i);
}
void multiplication(Triplet* t, int size, Triplet* t1, int size1)
{
    // Check whether multiplication is possible
    if(t[0].col != t1[0].row)
    {
        cout<<"Multiplication is not possible."<<endl;
        return;
    }

    int r = t[0].row;
    int c = t1[0].col;

    // Temporary normal matrix
    int** result = new int*[r];

    for(int i=0;i<r;i++)
    {
        result[i] = new int[c];

        for(int j=0;j<c;j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiplication
    for(int i=1;i<size;i++)
    {
        for(int j=1;j<size1;j++)
        {
            if(t[i].col == t1[j].row)
            {
                result[t[i].row][t1[j].col] +=
                    t[i].value * t1[j].value;
            }
        }
    }

    // Count non-zero elements
    int count=0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(result[i][j]!=0)
            {
                count++;
            }
        }
    }

    // Create triplet for result
    Triplet* t2 = new Triplet[count+1];

    t2[0].row = r;
    t2[0].col = c;
    t2[0].value = count;

    int k=1;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(result[i][j]!=0)
            {
                t2[k].row = i;
                t2[k].col = j;
                t2[k].value = result[i][j];

                k++;
            }
        }
    }

    cout<<"\nMultiplication:"<<endl;

    triplet_display(t2,count+1);

    // Delete temporary matrix
    // for(int i=0;i<r;i++)
    // {
    //     delete[] result[i];
    // }

    // delete[] result;
    // delete[] t2;
}
void display(Triplet* t, int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            int flag=0;

            for(int k=1;k<=t[0].value;k++){
                if(t[k].row==i && t[k].col==j){
                    cout<<t[k].value<<" ";
                    flag=1;
                    break;
                }
            }

            if(flag==0){
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int r1, c1;
    cout<<"Enter total no. of rows and columns: ";
    cin>>r1>>c1;

    int size;
    cout<<"Enter how many non-zero values you want to add: ";
    cin>>size;

    size+=1;

    Triplet* t=new Triplet[size];

    t[0].row=r1;
    t[0].col=c1;
    t[0].value=size-1;
    int row, col, value;

    cout<<"Enter the value of the elements: "<<endl;
    for(int i=1;i<size;i++){
        cout<<"Enter row index of the value: ";
        cin>>row;
        cout<<"Enter col index of the value: ";
        cin>>col;
        cout<<"Enter value: ";
        cin>>value;
        t[i].row=row;
        t[i].col=col;
        t[i].value=value;
    }
    transpose(t, size);
    int r2, c2;
    cout<<"Enter total no. of rows and columns: ";
    cin>>r2>>c2;

    int size1;
    cout<<"Enter how many non-zero values you want to add: ";
    cin>>size1;

    size1+=1;

    Triplet* t1=new Triplet[size1];

    t1[0].row=r2;
    t1[0].col=c2;
    t1[0].value=size1-1;
    int row1, col1, value1;

    cout<<"Enter the value of the elements: "<<endl;
    for(int i=1;i<size1;i++){
        cout<<"Enter row index of the value: ";
        cin>>row1;
        cout<<"Enter col index of the value: ";
        cin>>col1;
        cout<<"Enter value: ";
        cin>>value1;
        t1[i].row=row1;
        t1[i].col=col1;
        t1[i].value=value1;
    }

    addition(t, size, t1, size1);
    multiplication(t, size, t1, size);
    
}