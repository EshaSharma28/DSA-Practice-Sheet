#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    for(int i=0; i<n; i++){
        for (int j=0;j<n-i-1;j++){
            cout<<" ";}
        for (int j=0; j<2*i+1; j++){
            cout<<"*";}
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int k=n-1; k>=0; k--){
        for (int l=0;l<n-k-1;l++){
            cout<<" ";}
        for (int l=0; l<2*k+1; l++){
            cout<<"*";}
        for (int l=0;l<n-k-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
