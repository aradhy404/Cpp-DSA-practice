class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m.insert({nums[i], i});
        }
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            auto it = m.find(need);
            if (it != m.end() && it->second != i) {
                v.push_back(it->second);
                v.push_back(i);
                break;
            }
        }

        return v;
    }
};
