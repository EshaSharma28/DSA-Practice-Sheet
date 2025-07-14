#include<iostream>
using namespace std;
void ReverseArray(int arr[], int l, int h){
    if (l >= h)
        return;
    swap(arr[l], arr[h]);
    ReverseArray(arr, l + 1, h - 1);
}
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];  
    cout << "Enter the array elements:";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ReverseArray(arr, 0, n - 1);
    cout << "Reversed array:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
/*#include<iostream>
using namespace std;
void ReverseArray(int arr[], int l, int n){
    if (l >= n/2)
        return;
    swap(arr[l], arr[n-l-1]);
    l++;
    ReverseArray(arr, l, n);
}
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];  
    cout << "Enter the array elements:";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ReverseArray(arr, 0, n);
    cout << "Reversed array:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

*/