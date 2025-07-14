#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Value of n:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(char c= 'A'; c<= 'A'+i; c++){ //looping on character
            cout<<c<<" ";
        }
        cout<<endl;
    }
return 0;
}