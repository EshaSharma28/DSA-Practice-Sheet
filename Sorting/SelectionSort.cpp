#include<iostream>
using namespace std;
void Selection_Sort(int arr[], int n){
    for (int i=0; i<=n-2; i++){ /* loop may run till < n, it's just optimised*/
        int min=i;
        for(int j=i; j<=n-1; j++){
            if (arr[min] > arr[j])
            {
                min=j;
            }
        }
        int temp= arr[min];
        arr[min]=arr[i];
        arr[i]= temp;
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
    Selection_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}
/*Time complexity is n^2 for best, average and worst case.*/