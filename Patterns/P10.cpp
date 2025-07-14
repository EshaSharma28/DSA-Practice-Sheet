#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Value of n:";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<"*";
        }
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
     for (int k=n;k>0;k--){
        for (int l=0;l<k;l++){
            cout<<"*";
        }
        for (int l=0;l<n-k;l++){
            cout<<" ";
        }
        cout<<endl;
     }
    return 0;
}