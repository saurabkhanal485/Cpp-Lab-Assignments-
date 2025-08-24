#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int num = 1; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; 
        }

        int temp = num; 

        for (int j = 1; j <= i; j++) {
            cout << temp << " ";
            temp++;
        }

        temp -= 2;

        for (int j = 1; j < i; j++) {
            cout << temp << " ";
            temp--;
        }

        cout << endl;

        num++; 
    }

    return 0;
}
