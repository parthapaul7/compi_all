#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the size of the array
        int originalSize = n; // Store original size

        unordered_map<int, int> frequency; // Frequency map to store occurrences
        long long maxFrequency = 0; // Track the maximum frequency
        long long totalPairs = 0; // Track total pairs
        long long updatedCount = 0; // Count of updates

        while (n--) {
            int index, value;
            cin >> index >> value; // Read the updates for the array

            frequency[value]++; // Update frequency for the given value
            updatedCount++; // Increment the update counter

            // Calculate the contribution of the current frequency
            long long previousFreq = frequency[value] - 2;
            totalPairs -= (previousFreq * (previousFreq + 1)) / 2;

            // Update the total pairs with the new frequency contribution
            long long newFreq = frequency[value] - 1;
            totalPairs += (newFreq * (newFreq + 1)) / 2;

            // Update the maximum frequency encountered so far
            maxFrequency = max(maxFrequency, (long long)frequency[value]);

            // Calculate the result for the current state of the array
            long long maxFreqBeforeZero = maxFrequency - 1;
            long long currentResult = totalPairs;

            // Subtract pairs contribution of the maximum frequency before zero replacements
            currentResult -= (maxFreqBeforeZero * (maxFreqBeforeZero + 1)) / 2;

            // Calculate possible maximum pairs after replacing all zeros
            long long maxFreqAfterZero = maxFrequency + (originalSize - updatedCount) - 1;
            currentResult += (maxFreqAfterZero * (maxFreqAfterZero + 1)) / 2;

            // Output the current result after each update
            cout << currentResult << " ";
        }
        cout << endl; // Print a new line after each test case
    }
    return 0;
}
