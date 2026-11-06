class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp = unordered_map<int, int>();

        for(int i = 0 ; i < nums.size() ; ++i){

            if(mp.count(target - nums[i])){
                return {mp[target - nums[i]] , i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};