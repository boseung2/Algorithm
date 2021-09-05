#include<iostream>
#include<stack>

using namespace std;

int LEN = 100000;

int main(void) {
    int n;
    int input[LEN];
    stack<int> stack;
    cin >> n;
    
    // 1. input[]을 입력받는다.
    for(int i=0; i<n; i++) {
        cin >> input[i];
    }
    // 2. input이 stack.top()보다 크면 push
    stack.push(1);
    cout << "+" << "\n";
    for(int i=0; i<n-1; i++) {
        if(input[i] < stack.top()) {
            while(input[i] == stack.top()) {
                stack.pop();
                cout << "-" << "\n";
            }
        }

        if(input[i] > stack.top()) {
            stack.push(i+2);
            cout << "+" << "\n";
        }
        
        
    }
    // 3. input이 stack.top()과 같으면 pop()
    
}