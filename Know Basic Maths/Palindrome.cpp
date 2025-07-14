#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int number=n;
    int revnum =0;
while(n>0){
    int digit= n%10;
    revnum= (revnum*10) + digit;
    n=n/10;
}
if (number==revnum){
    cout<<"It is a palindrome";
}
else cout<<"It is not a palindrome";
}