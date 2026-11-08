class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;  // Stores the total beauty of all substrings

        // Choose the starting index of substring
        for (int i = 0; i < n; i++) {

            int freq[26] = {0};  // Stores frequency of each character (a-z)

            // Choose the ending index of substring
            for (int j = i; j < n; j++) {

                // Increase frequency of the current character
                freq[s[j] - 'a']++;

                int maxi = 0;       // Maximum character frequency
                int mini = INT_MAX; // Minimum non-zero character frequency

                // Find maximum and minimum frequencies
                for (int k = 0; k < 26; k++) {

                    // Ignore characters that are not present
                    if (freq[k] > 0) {
                        maxi = max(maxi, freq[k]);
                        mini = min(mini, freq[k]);
                    }
                }

                // Beauty = Maximum frequency - Minimum frequency
                ans += (maxi - mini);
            }
        }

        // Return total beauty of all substrings
        return ans;
        
    }
};