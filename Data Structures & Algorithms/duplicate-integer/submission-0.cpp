class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> num_map;

        for (auto num: nums) {
            if (num_map.find(num) != num_map.end()) {
                return true;
            }
            num_map[num] = num;
        }
        return false;
    }
};