class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        // Step 1: Sort intervals by starting point
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        // Step 2: Add the first interval
        ans.push_back(intervals[0]);

        // Step 3: Check remaining intervals
        for (int i = 1; i < intervals.size(); i++) {
            
            // If current interval overlaps with last interval
            if (intervals[i][0] <= ans.back()[1]) {
                
                // Merge them
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
            else {
                // No overlap, add as a new interval
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};