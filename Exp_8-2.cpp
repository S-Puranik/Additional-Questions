#include <iostream>
using namespace std;

void vowelCounter(char *str){
    int num_a = 0, num_e = 0, num_i = 0, num_o = 0, num_u = 0;

    char *ptr = str; 

    while(*ptr != '\0'){

        char letter = tolower(*ptr);
        switch (letter){
            case 'a':
                num_a ++;
                break;
            case 'e':
                num_e ++;
                break;
            case 'i':
                num_i ++;
                break;
            case 'o':
                num_o ++;
                break;
            case 'u':
                num_u ++;
                break;
            default:
                break;
        }
        ptr ++;
    }
    cout << "A: " << num_a << " E: " << num_e << " I: " << num_i << " O: " << num_o << " U: " << num_u << endl;
}

int main(){

    char str[1000];
    cout << "Enter a string: ";
    cin.getline(str, 1000);
    vowelCounter(str);
}
