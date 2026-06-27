class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> nums_map;
        vector<int> result;

        for (int i=0; i<nums.size(); i++) {
            nums_map[nums[i]] = i;
        }

        for (int i=0; i<nums.size(); i++) {
            auto iter = nums_map.find(target - nums[i]);
            if (iter != nums_map.end() && nums_map[target-nums[i]] != i) {
                result.push_back(i);
                result.push_back(nums_map[target - nums[i]]);
                return result;
            }
        }
        result.push_back(0);
        result.push_back(0);
        return result;
    }
};
