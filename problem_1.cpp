#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int sumList[n];
    int sum = 0;
    for(int x = 0; x<n; x++){
        cin >> sumList[x];
        sum += sumList[x];
    }
    cout << sum << "\n";
}