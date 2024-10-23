#include <iostream>
using namespace std;

int main(){
    
    cout << "Enter the value of N1 and N2 to find the prime numbers between them: ";
    int n1, n2;
    cin >> n1;
    cin >> n2;

    if(n1 > n2){
        cout << "N1 is greater than N2, please try again.";
        return 0;
    }

    cout << "The prime numbers between " << n1 << " and " << n2 << " are: ";
    for(int i=n1; i<=n2; i++){

        bool prime = true;

        if(i<=1){
            prime = false;
        }
        else{
            for(int j=2; j*j<=i; j++){
                if(i % j == 0){
                    prime = false;
                    break;
                }
            }
        }
        if(prime){
            cout << i << " ";
        }
    }
} 
