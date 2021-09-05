#include<iostream>
#include<queue>

using namespace std;

int main(void) {
    int n,k;
    queue<int> queue;
    int result[1000];
    cin >> n >> k;
    for(int i=1; i<=n; i++) {
        queue.push(i);
    }
    // 1 2 3 4 5 6 7
    for(int i=0; i<n; i++) {        
        for(int j=0; j<k-1; j++) {
            queue.push(queue.front());
            queue.pop();
        }
        result[i] = queue.front();
        queue.pop();
    }

    cout << "<";
    for(int i=0; i<n; i++) {
        if(i == n - 1) {
            cout << result[i];
            break;
        }
        cout << result[i] << ", ";
    }
    cout << ">";


}