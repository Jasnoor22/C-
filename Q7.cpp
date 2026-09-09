#include <iostream>
using namespace std;
int main (){
    char chr;
    cout << "Enter your char:";
    cin >> chr;
    // if ( int(chr) >= 97 && int(chr) <= 122 ){
    //     cout << "The character is lowercase\n";
    // } else if ( int(chr) <= 90 && int(chr) >= 65) {
    //     cout << "The character is Uppercase\n";
    // } else {
    //     cout << "Entered character in not valid\n";
    // }
        if ( chr <= 'z' && chr >= 'a' ){
        cout << "The character is lowercase\n";
    } else if ( chr >= 'A' && chr <= 'Z') {
        cout << "The character is Uppercase\n";
    } else {
        cout << "Entered character in not valid\n";
    }
}