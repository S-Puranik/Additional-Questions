#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    char array[n];
    char *ptr = array;

    cout << "Now enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    char array2[n];
    int i = 0;
    while (*ptr != '\0') {
        array2[i] = array[n - 1 - i];
        ptr++;
        i++;
    }

    for (int i = 0; i < n; i++) {
        array[i] = array2[i];
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
