//parameterised recursion
#include <iostream>
using namespace std;
void sum(int i,int s, int n){
    if(i>n)
    {cout<<s;
    return;}
    sum(i+1,s+i,n);
}
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    sum(0,0,n);
}
//other code
/*include <iostream>
using namespace std;
void sum(int i,int s){
    if(i<1)
    {cout<<s;
    return;}
    sum(i-1,s+i);
}
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    sum(n,0);
}
