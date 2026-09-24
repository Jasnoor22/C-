#include<iostream>
using namespace std;
int main(){
    int n=3;
    int c=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            cout << c << " ";
            c+=1;
        }
        cout <<endl;
    }
}