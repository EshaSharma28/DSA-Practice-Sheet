#include <iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    cout<<"Number of elements in array:";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(int i=0; i<n; i++){
    cin>> a[i];};
    cout<<"The array is:";
    for(int i=0; i<n; i++){
    cout<<a[i];}
    int number;
    cout<<endl<<"Enter the number to be searched:";
    cin>>number;
    int count=0;
    for (int i=0; i<n; i++){
        if(a[i]== number){
        count++;}
    }
    cout<<number<<" appears "<<count<<" times in the array.";
    return 0;
}
