#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"Enter the number:";
    cin >> n;
    int digits = 0;
    if (n == 0) {
        digits = 1;
    }
        while (n > 0) {
            n = n / 10;
            digits++;
        }
    cout << "Number of digits: " << digits << endl;
    return 0;
}
