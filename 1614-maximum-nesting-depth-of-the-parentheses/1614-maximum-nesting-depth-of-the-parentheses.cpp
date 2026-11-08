class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxi = 0;
        for (int i = 0; i < s.size(); i++) {
            // If opening bracket is found
            if (s[i] == '(') {
                depth++;
            }
            // If closing bracket is found
            else if (s[i] == ')') {
                depth--;
            }
            // Update maximum depth
            maxi = max(maxi, depth);
        }
        return maxi;
    }
};