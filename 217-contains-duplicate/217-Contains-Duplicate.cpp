#include<unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> unique_elements(nums.begin(), nums.end());

        return nums.size() != unique_elements.size();
    }
};