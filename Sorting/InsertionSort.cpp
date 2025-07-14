#include<iostream>
using namespace std;
void Insertion_Sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    { int j=i;
        while (j>0 && arr[j-1] > arr[j] ) /*We took j>0 and not >=0 beacuse then it would also run for j-1 making it -1 in case of j=0 */
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
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
    Insertion_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}