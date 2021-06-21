#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    for(int x = 0; x<n; x++){
        for(int i = n-1; i>x; i--){
            cout<< " ";
        }
        for(int y = 0; y<x+1; y++){
            cout<<"#";
        }
    cout << "\n";
    }
}