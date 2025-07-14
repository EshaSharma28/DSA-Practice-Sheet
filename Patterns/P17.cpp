#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";}
           char c='A';
            int breakpoint= ((2*i)+1)/2 +1;
        for(int j=0; j<(2*i)+1; j++){
            cout<<c;
            if(j <breakpoint)c++;
            else c--;}
        for(int j=0; j<n-i-1; j++){
            cout<<" ";}
            cout<<endl;
        }
    return 0;
    }
    
