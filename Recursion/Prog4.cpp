#include <iostream> 
using namespace std;
void print(int i,int n){
    if(i<1)
    return;
    print(i-1,n); //function called differently
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter valur of n:";
    cin>>n;
    print(n,n);

}