#include <iostream>
using namespace std;

int main(){
    cout << "Tables from 1 to 10" << endl;

    for(int i=1; i<=10; i++){
        cout << "Table of " << i << ":" << endl;
        for(int j=1; j<=12; j++){
            cout << i << " x " << j << " = " << i*j;
            cout << endl;
        }
        cout << endl;
    }
} 
