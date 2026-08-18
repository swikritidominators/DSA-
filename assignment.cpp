// Keshav - 3649 

// Question:5
#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& grid, int target) {
    if(grid.empty() || grid[0].empty()) return false;
    int m = grid.size(), n = grid[0].size();
    int left=0, right=m*n-1;
    while(left <= right) {
        int mid = left + (right-left)/2;
        int val = grid[mid/n][mid%n];
        if(val == target) return true;
        else if(val < target) left = mid+1;
        else right = mid-1; }
    return false;}
int main() {
    vector<vector<int>> grid = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    cout << (searchMatrix(grid, 3) ? "true" : "false") << endl;   // true
    cout << (searchMatrix(grid, 13) ? "true" : "false") << endl;  // false
}


