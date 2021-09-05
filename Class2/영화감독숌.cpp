#include<iostream>
#include<string>

using namespace std;

int main(void) {
    int input;
    int number=666;
    int nth=0;
    cin >> input;

    while(1) {

        if(to_string(number).find("666") != -1) {
            nth++;
        }
        
        if(input == nth) {
            cout << number;
            break;
        }

        number++;

    }
}