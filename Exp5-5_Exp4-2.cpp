#include <iostream>
using namespace std;

int main(){
    cout << "Enter the value of n: ";
    int n;
    cin >> n;

    int sum = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            sum +=j;
    }

    cout << sum;
}
