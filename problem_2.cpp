#include <iostream>
using namespace std;

int compareTriplets(int a[3], int b[3]){
        int AlicePoints = 0;
        int BobPoints = 0;
        for(int z = 0; z<3; z++){
            if(a[z] > b[z]){
                AlicePoints += 1;
            } else if(a[z] < b[z]){
                BobPoints += 1;
            }
        }
        cout << AlicePoints << + " " << BobPoints << "\n";
        return 0;
    }

int main(){
    int Person1[3];
    int Person2[3];
    for(int x = 0; x<3; x++){
            cin >> Person1[x];
        }
    for(int y = 0; y<3; y++){
        cin >> Person2[y];
    }
    compareTriplets(Person1, Person2);
    return 0;
}
