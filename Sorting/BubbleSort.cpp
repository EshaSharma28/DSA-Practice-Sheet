#include<iostream>
using namespace std;
void Bubble_sort(int arr[], int n){
    for (int i = n-1; i >0; i--)
    { 
        for (int j = 0; j<=i-1; j++){
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
            
        }
    }
    
}
int main(){
    int n;
    cout<<"Number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}
/*Worst case time complexity is O(n^2)*/
/*optimised code*/
/*
#include<iostream>
using namespace std;
void Bubble_sort(int arr[], int n){
    for (int i = n-1; i >0; i--)
    { int flag=0;
        for (int j = 0; j<=i-1; j++){
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                flag = 1 ;
            }
            
        }
      if (flag==0)
      {
        break;
      }
        
    }
    
}
int main(){
    int n;
    cout<<"Number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}
*/
/*Now best case time complexity is O(N)- in case of a sorted array*/