#include <iostream>
using namespace std;

int main(){
    cout << "Enter the lenghth of a string: ";
    int n;
    cin >> n;
    char array[n];
    
    cout << "Now enter the elements of the string: ";
    
    for(int i=0; i<n; i++){
        cin >> array[i];
    }

    cout << "Now enter the index of the character to be replaced: ";
    int index;
    cin >> index;

    char replace;
    cout << "Now enter the character to replace the index with: ";
    cin >> replace;

    char *pt = &array[index];

    *pt = replace;

    cout << "New array: ";
    for(int i=0; i<n; i++){
        cout << array[i];
    }

}
