#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<long long> array;
    for(int i = 0; i<5; i++){
        int temp = 0;
        cin >> temp;
        array.push_back(temp);
    }
    long long max = array[0];
    long long min = array[0];
    for(int x = 0; x<array.size(); x++){
        if(max<array[x]){
            max = array[x];
        }
        if(min>array[x]){
            min = array[x];
        }
    }
    bool condition = false;
    if(max == array[0]&&min == array[0]){
        condition = true;
    }
    vector<long long> arraymin;
    vector<long long> arraymax;
    arraymin = array;
    arraymax = array;
    if(condition == false){
        for(int y = 0; y<array.size(); y++){
        if(max == array[y]){
            arraymax.erase(arraymax.begin()+y);
            }
        if(min == array[y]){
            arraymin.erase(arraymin.begin()+y);
            }
        }
    }
    long long summin = 0;
    long long summax = 0;
    if(condition == true){
        arraymin.pop_back();
        arraymax.pop_back();
    }
    for(int m = 0; m<arraymin.size(); m++){
        summin+=arraymin[m];
        summax+=arraymax[m];
    }
    cout << summax << " " << summin << "\n";
}