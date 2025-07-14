#include <iostream>
using namespace std;
int fact(int n){
    if (n == 0)
    return 1;
   else return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter the valur of n:";
    cin>>n;
    cout<<fact(n);
}
/*#include <iostream>
using namespace std;
void fact(int i,int f){
    if(i<1)
    {cout<<f;
    return;}
    fact(i-1,f*i);
}
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    fact(n,1);
}
*/