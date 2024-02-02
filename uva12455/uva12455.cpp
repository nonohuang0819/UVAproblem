#include <iostream>
#include <vector>

using namespace std;

bool isPossible(int target_length, int num_bars, vector<int>& bar_lengths, int index, int current_length) {
    if(current_length > target_length)
        return false;
    if(current_length == target_length)
        return true;
    if(index == target_length)
        return current_length == target_length;
    
    if(isPossible(target_length, num_bars, bar_lengths,  index+1,  current_length))

    if(isPossible(target_length, num_bars, bar_lengths,  index+1,  current_length + bar_lengths[index]))

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> bar_lengths(p);

        for (int i = 0; i < p; i++) {
            cin >> bar_lengths[i];
        }

        if (isPossible(n, p, bar_lengths, 0, 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
