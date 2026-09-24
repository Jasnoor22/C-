#include<iostream>
using namespace std;
int main (){
    int n;
    bool isprime = true ;
    cout << "Enter your num:";
    cin >> n;
    if (n<=1){
        isprime=false;
    }
    for(int i= 2; i*i <= n;i++){
        if(n%i==0){
            isprime = false;
            break; 
        }
    }
     if (isprime == false){
        cout << "Num is not prime\n";
     } else {
        cout << "Num is prime\n";
     }
    return 0;
}