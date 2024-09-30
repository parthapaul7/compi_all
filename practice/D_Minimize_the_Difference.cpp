#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate overlaps for each start day
pair<int, int> findBestDays(int n, int d, vector<pair<int, int>> &jobs) {
    vector<int> overlap(n + 1, 0); // To store number of overlaps on each day

    // Mark overlap intervals
    for (auto &job : jobs) {
        int l = job.first, r = job.second;
        overlap[l]++; // Increment start of overlap
        if (r + 1 <= n) {
            overlap[r + 1]--; // Decrement after the end of overlap
        }
    }

    // Use prefix sum to calculate overlaps on each day
    for (int i = 1; i <= n; i++) {
        overlap[i] += overlap[i - 1];
    }

    // Use sliding window to find maximum and minimum overlap over d days
    int maxOverlap = 0, minOverlap = n + 1;
    int startBrother = 1, startMother = 1;
    int currentOverlap = 0;

    // Initial window
    for (int i = 1; i <= d; i++) {
        currentOverlap += overlap[i];
    }
    maxOverlap = currentOverlap;
    minOverlap = currentOverlap;

    // Sliding window over the days
    for (int i = d + 1; i <= n; i++) {
        currentOverlap += overlap[i] - overlap[i - d];
        if (currentOverlap > maxOverlap) {
            maxOverlap = currentOverlap;
            startBrother = i - d + 1;
        }
        if (currentOverlap < minOverlap) {
            minOverlap = currentOverlap;
            startMother = i - d + 1;
        }
    }

    return {startBrother, startMother};
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;

        vector<pair<int, int>> jobs(k);
        for (int i = 0; i < k; i++) {
            cin >> jobs[i].first >> jobs[i].second;
        }

        auto result = findBestDays(n, d, jobs);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
