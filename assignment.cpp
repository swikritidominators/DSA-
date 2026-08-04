// Keshav - 3649 

// Question:5
#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target) {
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == target) return i;
    }
    return -1;}
int main() {
    vector<int> nums = {4,2,7,1,9,3};
    int target = 7;
    cout << search(nums, target) << endl;  // 2
}



