class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> box;
        for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if(box.find(need) != box.end()) {
                return {box[need], i};
            }
            box[nums[i]] = i;
        }
        return {};
    }
};
