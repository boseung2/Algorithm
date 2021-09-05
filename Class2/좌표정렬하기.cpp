#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if(a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main(void) {
    int n;
    vector<pair<int, int> > v;

    cin >> n;
    for(int i=0; i<n; i++) {
        int first, second;
        cin >> first >> second;
        v.push_back(pair<int, int>(first, second));
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
}