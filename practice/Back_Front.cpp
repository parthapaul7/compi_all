#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Count the occurrences of each character
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // Function to count and remove subsequences
    auto count_and_remove_subsequences = [&](const string& seq) {
        int count = 0;
        while (true) {
            bool found = true;
            for (char c : seq) {
                if (freq[c] == 0) {
                    found = false;
                    break;
                }
            }
            if (!found) break;
            count++;
            for (char c : seq) {
                freq[c]--;
            }
        }
        return count;
    };

    // Count initial "back" and "front" subsequences
    int back_count = count_and_remove_subsequences("back");
    int front_count = count_and_remove_subsequences("front");

    // Calculate remaining length of the string
    int remaining_length = 0;
    for (auto &p : freq) {
        remaining_length += p.second;
    }

    // Add characters back to potentially form new subsequences
    int total_used = back_count * 4 + front_count * 5;
    while (true) {
        bool formed_new = false;
        if (back_count > 0) {
            // Add back characters for "back"
            freq['b']++;
            freq['a']++;
            freq['c']++;
            freq['k']++;
            total_used -= 4;
            formed_new = true;
            back_count--;
        } else if (front_count > 0) {
            // Add back characters for "front"
            freq['f']++;
            freq['r']++;
            freq['o']++;
            freq['n']++;
            freq['t']++;
            total_used -= 5;
            formed_new = true;
            front_count--;
        }
        if (!formed_new) break;

        // Try to form new subsequences again
        back_count += count_and_remove_subsequences("back");
        front_count += count_and_remove_subsequences("front");
        total_used += back_count * 4 + front_count * 5;
    }

    int ans = n - total_used;
    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
