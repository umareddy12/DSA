#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int goodPairs = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                cout << "Good pair: (" << nums[i] << ", " << nums[j] << ")" << endl;
                goodPairs++;
            }
        }
    }

    cout << "Number of good pairs: " << goodPairs << endl;

    return 0;
}

