#include<iostream>
#include<stack>

using namespace std;

int main(void) {
    int k, sum=0;
    stack<int> stack;
    cin >> k;
    for(int i=0; i<k; i++) {
        int input;
        cin >> input;
        if(input == 0) {
            stack.pop();
            continue;
        }

        stack.push(input);
    }

    while(stack.size()) {
        sum += stack.top();
        stack.pop();
    }

    cout << sum;

    
}