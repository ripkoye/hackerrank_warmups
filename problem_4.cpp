#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int array[n][n];
    for(int x = 0; x<n; x++){
        for(int y = 0; y<n; y++){
            cin >> array[x][y];
        }
    }
    int left = 0;
    int right = 0;
    for(int i = 0; i<n; i++){
        for(int t = 0; t<n; t++){
            if(i==t){
                left+=array[i][t];
            }
            if(i==(n-1-t)){
                right+=array[i][t];
            }
        }
    }
    cout << abs(left-right) << "\n";
}