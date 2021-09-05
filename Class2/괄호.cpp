#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main(void) {
    int n;
    string input;
    cin >> n;
    for(int i=0; i<n; i++) {
        stack<char> stack;
        cin >> input;
        for(int j=0; j<input.length(); j++) {
            if(input[j] == '(') {
                stack.push('(');
            } else if(input[j] == ')') {
                if(stack.empty()) {
                    stack.push(')');
                    break;
                }
                stack.pop();  
            }
        }
        if(stack.size() == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}