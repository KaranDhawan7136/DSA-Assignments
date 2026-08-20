#include<iostream>
#include<string>
using namespace std;

void string_concatenate(string s1){
    string s2, s3;
    cout<<"Enter the string for concatenate: ";
    getline(cin, s2);
    int i=0;
    while(s1[i]!=NULL){
        s3+=s1[i];
        i++;
    }
    int j=0;
    while(s2[j]!=NULL){
        s3+=s2[j];
        j++;
    }
    cout<<"Concatenated String: "<<s3<<endl;
}
void string_reverse(string s1){
    string s2;
    int size=s1.length();
    while(size>=0){
        s2+=s1[size];
        size--;
    }
    cout<<"Reversed String: "<<s2<<endl;
}
void vowel_removal(string s1){
    string s2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U'){
            continue;
        }
        else{
            s2+=s1[i];
        }
    }
    cout<<"After removing vowels: "<<s2<<endl;
}
void string_order(string s1){
    int n=s1.length();
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s1[j]>s1[j+1]){
                temp=s1[j+1];
                s1[j+1]=s1[j];
                s1[j]=temp;
            }
        }
    }
    cout<<"Sorted String: "<<s1<<endl;
}
void upper_to_lower(string s1){
    for(int i=0;i<s1.length();i++){
        s1[i]+=32;
    }
    cout<<"Uppercase String: "<<s1<<endl;
}
int main(){
    string s1;
    while(true){
        cout<<"Enter the string: ";
        getline(cin, s1);
        int choose;
        cout<<"Choose from the following operations: "<<endl;
        cout<<"1. Concatenate Strings"<<endl;
        cout<<"2. Reverse String"<<endl;
        cout<<"3. Remove Vowels"<<endl;
        cout<<"4. String Sorting"<<endl;
        cout<<"5. Uppercase to lowercase"<<endl;
        cout<<"6. Exit"<<endl;
        cin>>choose;
        cin.ignore();
        switch (choose)
        {
        case 1:
            string_concatenate(s1);
            break;
        case 2:
            string_reverse(s1);
            break;
        case 3:
            vowel_removal(s1);
            break;
        case 4:
            string_order(s1);
            break;
        case 5:
            upper_to_lower(s1);
            break;
        case 6:
            return 0;
        
        default:
            break;
        }
    }
    
    return 0;
}