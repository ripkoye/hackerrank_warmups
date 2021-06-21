#include <iostream>
using namespace std;

int aVeryBigSum(int index){
    long int sum = 0;
    int array[index];
    for(int x = 0; x<index; x++){
        cin >> array[x];
        sum += array[x];
    }
    cout << sum << "\n";
    return(sum);
}

int main(){
    int n = 0;
    cin >> n;
    aVeryBigSum(n);
}
