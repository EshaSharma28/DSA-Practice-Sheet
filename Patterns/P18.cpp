#include<iostream>
using namespace std;
int main(){
    int n; //n=5 here
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=0; i<n; i++){
        for(char c='e'-i;c<='e';c++){
            cout<<c;}
            cout<<endl;
        }
    return 0;
    }
    