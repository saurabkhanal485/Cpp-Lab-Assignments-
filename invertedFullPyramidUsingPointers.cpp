#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int *rows = &n;

    for (int i = *rows; i >= 1; i--) {
        for (int j = 0; j < *rows - i; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

