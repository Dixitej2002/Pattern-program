#include <vector>
#include <algorithm> // for min function
#include <iostream> // for cout

using namespace std;

class Solution {
public:
    vector<int> playOfGlasses(int c1, int w1, int c2, int w2, int c3, int w3) {
        int totalOperations = 105;

        for (int i = 0; i < totalOperations; ++i) {
            int pour = min(w1, c2 - w2); // Pour from a to b
            w1 -= pour;
            w2 += pour;

            pour = min(w2, c3 - w3); // Pour from b to c
            w2 -= pour;
            w3 += pour;

            pour = min(w3, c1 - w1); // Pour from c to a
            w3 -= pour;
            w1 += pour;
        }

        return {w1, w2, w3};
    }

    vector<vector<int>> processTestCases(vector<vector<int>>& testCases) {
        vector<vector<int>> results;
        for (auto& tc : testCases) {
            if (tc.size() == 6) {
                vector<int> result = playOfGlasses(tc[0], tc[1], tc[2], tc[3], tc[4], tc[5]);
                results.push_back(result);
            }
        }
        return results;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> testCases = {
      
    {10, 3, 11, 4, 12, 5},  // Example 1
    {5, 2, 7, 3, 9, 4}     // Additional test case
    // Additional test case
    };

    vector<vector<int>> results = solution.processTestCases(testCases);

    // Output results
    for (const auto& result : results) {
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl; // Add newline after printing each result
    }

    return 0;
}