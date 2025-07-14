#include<iostream>
using namespace std;
bool IsPalindrome(int arr[], int l, int n){
    if (l >= n/2)
        return true;
        if (arr[l] != arr[n - l - 1])
        return false;
    return IsPalindrome(arr, l + 1, n);
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
    if (IsPalindrome(arr, 0, n))
        cout << "The array is a palindrome.\n";
    else
        cout << "The array is NOT a palindrome.\n";
}