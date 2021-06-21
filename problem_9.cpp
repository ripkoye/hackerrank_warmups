#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string input = "";
    cin >> input;
    string input2 = input;
    char seclast = input.at(input.length()-2);
    string output = input;
    stringstream convert(input);
    int hour;
    convert >> hour;
    bool boolean = true;
    bool check = false;
    input2.erase(0,2);
    if(seclast=='P'){
        if(hour == 12){
            boolean = false;
        }
        if(boolean == true){
            hour +=12;
        }
    }
    if(hour == 12&&seclast == 'A'){
        hour = 0;
    } else if(seclast == 'A'){
        output = "0"+to_string(hour)+=input2;
        check = true;
    } 
    if(check == false){
        output = to_string(hour)+=input2;
    }
    output = output.erase(output.length()-2, 2);
    if(hour == 0){
        output = to_string(hour)+=output;
    }
    cout << output << "\n";
}