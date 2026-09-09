#include <iostream>
using namespace std;
int main() {
    int m;
    cout << "enter your marks:" , cin >> m;
    if ( m>=90 ){
        cout << "Grade: A\n";
    } else if ( 90 > m && m >= 80 ) {
        cout << "Grade : B\n";
    }else if ( 80 > m ){
        cout << "Grade : C\nd";
    }else{
        cout << " Enter a valid num";
    }
    return 0;
}