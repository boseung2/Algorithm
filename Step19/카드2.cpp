#include<iostream>
#include<queue>

using namespace std;

int main(void) {
    int n;
    queue<int> queue;
    cin >> n;

    for(int i=1; i<=n; i++) {
        queue.push(i);
    }

    while(queue.size()!=1) {
        queue.pop();

        // 1. 맨 앞에값 저장
        // 2. pop
        // 3. 저장했던 값 push 
        //int tmp = queue.front();
        queue.push(queue.front());
        queue.pop();
    }

    cout << queue.front();
}