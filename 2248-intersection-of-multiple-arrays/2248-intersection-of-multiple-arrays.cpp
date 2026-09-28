class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        int n = nums.size();
        vector<int> count(1001, 0);

        // Count in how many arrays each number appears
        for (auto &arr : nums) {
            for (int x : arr) {
                count[x]++;
            }
        }

        vector<int> ans;

        // Number must appear in all arrays
        for (int i = 1; i <= 1000; i++) {
            if (count[i] == n) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};