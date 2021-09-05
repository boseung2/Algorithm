#include<iostream>

using namespace std;

int arr[41][2] = {{1,0}, {0,1}};
void fib(int n) {
    arr[n][0] = arr[n-1][0] + arr[n-2][0];
    arr[n][1] = arr[n-1][1] + arr[n-2][1];
}

int main(void) {
    int t, n;
    cin >> t;

    for(int i=2; i<41; i++) {
        fib(i);
    }

    for(int i=0; i<t; i++) {
        cin >> n;
        cout << arr[n][0] << " " << arr[n][1] << "\n";
    }

}