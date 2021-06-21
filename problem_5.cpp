#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int array[n];
    float positive = 0;
    float negative = 0;
    float zeros = 0;
    for(int x=0; x<n; x++){
        cin >> array[x];
        if(array[x] < 0){
            negative++;
        }
        if(array[x] == 0){
            zeros++;
        }
        if(array[x]>0){
            positive++;
        }
    }
    double negative1 = negative/n;
    double positive1 = positive/n;
    double zeros1 = zeros/n;
    cout << positive1 << "\n" << negative1 << "\n" << zeros1 << "\n";
}