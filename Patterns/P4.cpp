#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Value of n:";
    cin>>n; 
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=i-1;j++)
{
    cout<<i;
} 
    cout<<endl;
}
return 0;
}