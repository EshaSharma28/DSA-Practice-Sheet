#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Value of n:";
    cin>>n;
    char c='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){ //looping on character
            char b= c+i;
            cout<<b;
        }
        cout<<endl;
    }
return 0;
}