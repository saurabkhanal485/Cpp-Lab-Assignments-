#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    char alphabet = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << alphabet << " ";
        }
        cout << endl;
        alphabet++; 
    }

    return 0;
}
