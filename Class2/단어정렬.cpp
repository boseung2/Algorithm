#include<iostream>
#include<algorithm>

using namespace std;

int SIZE = 20000;

bool comp(string s1, string s2) {
    if(s1.length() != s2.length()) {
        return s1.length() < s2.length();
    } else {
        return s1 < s2;
    }
}

int main(void) {
    int n;
    string arr[SIZE];

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, comp);

    for(int i=0; i<n; i++) {
        if(arr[i] == arr[i+1]) {
            continue;
        }
        cout << arr[i] << " ";
    }

}