#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter value of n:";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
        for(j=0;j<2*i;j++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
return 0;
}