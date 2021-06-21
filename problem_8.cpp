#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int array[n];
    for(int i = 0; i<n; i++){
        cin >> array[i];
    }
    sort(array, array+n);
    int max = array[n-1];
    int count = 0;
    for(int x = n-1; x>=0; x--){
        if(max == array[x]){
            count++;
        } else{
            break;
        }
    }
    cout << count << "\n";
}